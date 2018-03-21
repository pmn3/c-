#include <iostream>
#include <windows.h>
#include <string.h>
#include <tlhelp32.h>
#include <stdio.h>
#include <shellapi.h>
#include <ctime>


using namespace std;

char* steptime () {
    time_t rawtime;
    struct tm * timeinfo;
    time( &rawtime );
    timeinfo = localtime( &rawtime );
//    cout << asctime(timeinfo);
//     printf (asctime(timeinfo));
     char *s = (asctime(timeinfo));
//     printf(s);
        return s;
}

int PIDByName (string AProcessName){
HANDLE pHandle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
PROCESSENTRY32 ProcessEntry;
int  pid;
ProcessEntry.dwSize = sizeof(ProcessEntry);
bool Loop = Process32First(pHandle, &ProcessEntry);

 while (Loop)
 {
          if (ProcessEntry.szExeFile == AProcessName)
     {
         pid = ProcessEntry.th32ProcessID;
         CloseHandle(pHandle);
         return pid;
     }
     Loop = Process32Next(pHandle, &ProcessEntry);
 }
 return 0;
}


int main(void)
{

FILE *logf;
logf = fopen("monupl.log","w");

fprintf (logf, "monup start \n");
char *st = steptime();
fprintf (logf, st);
fprintf(logf, "\n");

int pidplot = 1;
int pidbaul = 1 ;
int pidmoct =1 ;
int pidgnet = 1 ;
int pidb204 = 1 ;
int pidshowcase = 1;
int pidgrad = 1 ;
int pidwall = 1 ;
int pidaspd = 1 ;
int pidskif = 1;
int pidsmtp = 1;
int i = 0;
int step = 0;
int loadsmtp = 1;

do    {

////
    if (pidsmtp == 0) {
            fprintf (logf, "smtp.exe down \n");
           ShellExecute(0, "open", "c:\\plot\\task\\smtp\\smtp.exe", NULL, NULL, SW_SHOWNORMAL);
            fprintf (logf, "start smtp.exe \n");
            fprintf (logf, "new pid smtp.exe %d\n",PIDByName("smtp.exe"));
            fprintf (logf, "loadsmt - %d\n",loadsmtp++);
            steptime();
            fprintf (logf, "\n");
    } else {
//        printf("smtp.exe up \n");
//        printf("pid smtp.exe - %d\n",pidsmtp);
    }
////
//plot.exe
    pidplot = PIDByName("plot.exe");
//    printf("pid plot - %d\n",pidplot);
//baul.exe
    pidbaul = PIDByName("baul.exe");
//    printf("pid baul - %d\n",pidbaul);
//moct.exe
    pidmoct = PIDByName("moct.exe");
//    printf("pid moct - %d\n",pidmoct);
//gnet.exe
    pidgnet = PIDByName("gnet.exe");
//    printf("pid gnet - %d\n",pidgnet);
//b204.exe
    pidb204 = PIDByName("b204.exe");
//    printf("pid b204 - %d\n",pidb204);
//showcase.exe
    pidshowcase = PIDByName("showcase.exe");
//    printf("pid showcase - %d\n",pidshowcase);
//grad.exe
    pidgrad = PIDByName("grad.exe");
//    printf("pid grad - %d\n",pidgrad);
//wall.exe
    pidwall = PIDByName("wall.exe");
//    printf("pid wall - %d\n",pidwall);
//aspd.exe
    pidaspd = PIDByName("aspd.exe");
//    printf("pid aspd - %d\n",pidaspd);
//skif.exe
    pidskif = PIDByName("skif.exe");
//    printf("pid skif - %d\n",pidskif);
//smtp.exe
    pidsmtp = PIDByName("smtp.exe");
//    printf("pid smtp - %d\n",pidsmtp);

//printf("-------------------------------\n");


//printf("step - %d\n",step++);
// задержка 1000 - 1секунда
//Sleep(1000);
Sleep(600);
   }
while ( (pidplot > 0) && (pidbaul > 0 ) );
   fprintf (logf, "UP stop \n");
   fprintf (logf, "\n");
    return 0;
}
