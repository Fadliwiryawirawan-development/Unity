const express = require('express');
const axios = require('axios');
const cors = require('cors');
const compression = require('compression');

const app = express();
const PORT = process.env.PROXY_PORT || 4005;

// Cache for API responses (simple in-memory cache)
const cache = new Map();
const CACHE_DURATION = 5 * 60 * 1000; // 5 minutes

// Middleware
app.use(compression());
app.use(cors({
  origin: process.env.NODE_ENV === 'production' 
    ? ['https://your-domain.com'] 
    : ['http://localhost:5173', 'http://localhost:3000'],
  credentials: true
}));

// Helper function to get cached data
const getCachedData = (key) => {
  const cached = cache.get(key);
  if (cached && Date.now() - cached.timestamp < CACHE_DURATION) {
    return cached.data;
  }
  cache.delete(key);
  return null;
};

// Helper function to set cache
const setCachedData = (key, data) => {
  cache.set(key, { data, timestamp: Date.now() });
};

app.get('/api/mlbb-meta', async (req, res) => {
  const cacheKey = 'mlbb-meta';
  
  try {
    // Check cache first
    const cachedData = getCachedData(cacheKey);
    if (cachedData) {
      return res.json(cachedData);
    }

    const url = 'https://mapi.mobilelegends.com/legends/area?dateType=week&area=all&module=all&moduleType=all&language=en';
    const response = await axios.get(url, {
      headers: {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.124 Safari/537.36',
        'Referer': 'https://m.mobilelegends.com/rank',
        'Origin': 'https://m.mobilelegends.com',
        'Accept': 'application/json, text/plain, */*',
        'Accept-Language': 'en-US,en;q=0.9'
      },
      timeout: 10000 // 10 second timeout
    });

    const data = response.data.data;
    setCachedData(cacheKey, data);
    res.json(data);

  } catch (err) {
    console.error('MLBB Meta API Error:', err.message);
    res.status(500).json({ 
      error: 'Failed to fetch MLBB meta data',
      message: err.message,
      timestamp: new Date().toISOString()
    });
  }
});

// Health check endpoint
app.get('/health', (req, res) => {
  res.json({ 
    status: 'ok', 
    service: 'MLBB Meta Proxy',
    timestamp: new Date().toISOString(),
    cache_size: cache.size
  });
});

// Clear cache endpoint (for development)
app.post('/api/clear-cache', (req, res) => {
  cache.clear();
  res.json({ message: 'Cache cleared successfully' });
});

app.listen(PORT, () => {
  console.log(`
╔════════════════════════════════════════════╗
║       MLBB Meta Proxy is running! 🚀      ║
║    http://localhost:${8080}/api/mlbb-meta    ║
║         Cache Duration: ${CACHE_DURATION/100000/600} minutes         ║
╚════════════════════════════════════════════╝
  `);
});

// Graceful shutdown
process.on('SIGTERM', () => {
  console.log('Received SIGTERM, shutting down gracefully...');
  cache.clear();
  process.exit(0);
});

process.on('SIGINT', () => {
  console.log('Received SIGINT, shutting down gracefully...');
  cache.clear();
  process.exit(0);
});
