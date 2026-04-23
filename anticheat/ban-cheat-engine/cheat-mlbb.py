# MLBB Platform Environment Configuration
# Copy this file to .env and fill in your values

# ===== GENERAL SETTINGS =====
NODE_ENV=development
APP_NAME="MLBB Platform"

# ===== BACKEND CONFIGURATION =====
# API Server
PORT=4000
API_HOST=localhost

# Proxy Server
PROXY_PORT=4005

# ===== FRONTEND CONFIGURATION =====
# API URLs
VITE_API_URL=http://localhost:4000/api
VITE_PROXY_API_URL=http://localhost:4005/api

# App Configuration
VITE_APP_TITLE="MLBB Platform"
VITE_APP_DESCRIPTION="Mobile Legends Bang Bang Gaming Community Platform"

# ===== AI CHATBOT CONFIGURATION =====
# OpenAI API (for AI chatbot)
OPENAI_API_KEY=your_openai_api_key_here
OPENAI_MODEL=gpt-3.5-turbo
OPENAI_MAX_TOKENS=1000
OPENAI_TEMPERATURE=0.7

# ===== EXTERNAL APIS =====
# Mobile Legends API
MLBB_API_URL=https://mapi.mobilelegends.com
MLBB_API_CACHE_DURATION=300000

# ===== SECURITY =====
# JWT Configuration
JWT_SECRET=your_super_secret_jwt_key_here
JWT_EXPIRES_IN=24h

# CORS Origins (comma-separated for production)
CORS_ORIGINS=http://localhost:3000,http://localhost:5173

# ===== MONITORING & LOGGING =====
# Error Reporting
ENABLE_ERROR_REPORTING=false
ERROR_REPORTING_URL=

# Analytics
ENABLE_ANALYTICS=false
ANALYTICS_ID=

# ===== PERFORMANCE =====
# Cache Settings
ENABLE_REDIS_CACHE=false
REDIS_URL=redis://localhost:6379

# Rate Limiting
RATE_LIMIT_WINDOW_MS=900000
RATE_LIMIT_MAX_REQUESTS=100

# ===== DATABASE (if needed in future) =====
# MongoDB
MONGODB_URI=mongodb://localhost:27017/mlbb_platform

# PostgreSQL
DATABASE_URL=postgresql://username:password@localhost:5432/mlbb_platform

# ===== DEVELOPMENT TOOLS =====
# Debug settings
DEBUG_MODE=true
VERBOSE_LOGGING=true

# Hot reload
ENABLE_HOT_RELOAD=true

# ===== PRODUCTION OPTIMIZATIONS =====
# Compression
ENABLE_GZIP=true
COMPRESSION_LEVEL=6

# CDN
CDN_URL=
STATIC_ASSETS_URL=

# ===== SOCIAL FEATURES =====
# Discord Integration (if needed)
DISCORD_BOT_TOKEN=
DISCORD_GUILD_ID=
DISCORD_CLIENT_ID=

# ===== FILE UPLOADS (if needed) =====
# Local storage
UPLOAD_DIR=uploads
MAX_FILE_SIZE=10485760

# Cloud storage (AWS S3, etc.)
AWS_ACCESS_KEY_ID=
AWS_SECRET_ACCESS_KEY=
AWS_REGION=
AWS_S3_BUCKET= 
