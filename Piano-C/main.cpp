#include <iostream>
using namespace std;
#include<windows.h>
#include "rlutil.h"
#include "PianoKeys.h"

int main(){

system("mode con: cols=80 lines=30");
system("color 8F");

        cout<<"\n                           Piano-C!\n\n";
        cout<<"o Keys:\n";
        cout<<"    DO#: 'W' | RE#: 'E'           FA#: 'T' | SOL#: 'Y' | LA#: 'U'\n";
        cout<<"DO: 'A' | RE: 'S' | MI: 'D' | FA: 'F' | SOL: 'G'  |  LA: 'H' | SI: 'J'\n\n";
        cout<<"o change duration:\n";
        cout<<" 'space': Increment duration.\n 'N': Default duration.\n 'L': Low duration.\n\n";
        cout<<"Press 'Esc' for close.\n\n";

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

    while(ejecution){
        int key=rlutil::getkey();
        switch(key){
        case 97 :Beep(PianoKey[0].getFrequency(),duration);break;//DO
        case 119:Beep(PianoKey[1].getFrequency(),duration);break;//DO#
        case 115:Beep(PianoKey[2].getFrequency(),duration);break;//RE
        case 101:Beep(PianoKey[3].getFrequency(),duration);break;//RE#
        case 100:Beep(PianoKey[4].getFrequency(),duration);break;//MI
        case 102:Beep(PianoKey[5].getFrequency(),duration);break;//FA
        case 116:Beep(PianoKey[6].getFrequency(),duration);break;//FA#
        case 103:Beep(PianoKey[7].getFrequency(),duration);break;//SOL
        case 121:Beep(PianoKey[8].getFrequency(),duration);break;//SOL#
        case 104:Beep(PianoKey[9].getFrequency(),duration);break;//LA
        case 117:Beep(PianoKey[10].getFrequency(),duration);break;//LA#
        case 106:Beep(PianoKey[11].getFrequency(),duration);break;//SI
        case 32 :duration+=100;break;//space -Increment duration.
        case 110:duration=300;break;//'N'    -Default duration.
        case 108:duration-=100;break;//'L'   -Low duration.
        case   0:ejecution=false;break;//End program.
        default :cout<<"NOPE "<<music<<" ";break;
        }
    }

return 0;
}
