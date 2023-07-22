#include <iostream>
using namespace std;
#include<windows.h>
#include "rlutil.h"
#include "Tools.h"
#include "PianoKeys.h"
#include "PianoCout.h"
#include "LogoCout.h"
#include "HintCout.h"

int main(){

system("mode con: cols=80 lines=22");
system("color 8F");
rlutil::hidecursor();
//Logo:
    Logo();
//Piano:
    Piano12Keys();
//Constructor:
    PianoKeys PianoKey[12];
        PianoKey[0].DO();
        PianoKey[1].DO_S();
        PianoKey[2].RE();
        PianoKey[3].RE_S();
        PianoKey[4].MI();
        PianoKey[5].FA();
        PianoKey[6].FA_S();
        PianoKey[7].SOL();
        PianoKey[8].SOL_S();
        PianoKey[9].LA();
        PianoKey[10].LA_S();
        PianoKey[11].SI();

    int duration=300;

    int8_t music=14;

    bool ejecution=true;
    int key=16;
    while(ejecution){
//Hint:
     Hint(duration, PianoKey, key);
        key=ReturnKey(rlutil::getkey());
        switch(key){
        case 0 :Beep(PianoKey[0].getFrequency(),duration);break;//DO
        case 1 :Beep(PianoKey[1].getFrequency(),duration);break;//DO#
        case 2 :Beep(PianoKey[2].getFrequency(),duration);break;//RE
        case 3 :Beep(PianoKey[3].getFrequency(),duration);break;//RE#
        case 4 :Beep(PianoKey[4].getFrequency(),duration);break;//MI
        case 5 :Beep(PianoKey[5].getFrequency(),duration);break;//FA
        case 6 :Beep(PianoKey[6].getFrequency(),duration);break;//FA#
        case 7 :Beep(PianoKey[7].getFrequency(),duration);break;//SOL
        case 8 :Beep(PianoKey[8].getFrequency(),duration);break;//SOL#
        case 9 :Beep(PianoKey[9].getFrequency(),duration);break;//LA
        case 10:Beep(PianoKey[10].getFrequency(),duration);break;//LA#
        case 11:Beep(PianoKey[11].getFrequency(),duration);break;//SI
        case 12:duration+=100;break;//space -Increment duration.
        case 13:duration =300;break;//'N'    -Default duration.
        case 14:duration-=100;break;//'L'   -Low duration.
        case 15:ejecution=false;break;//End program.
        case 16:gotoxy(55,15);cout<<"NOPE "<<music;break;//Default.
        }
    }
    gotoxy(1,19);
return 0;
}
