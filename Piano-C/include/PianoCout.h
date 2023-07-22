#ifndef PIANOCOUT_H_INCLUDED
#define PIANOCOUT_H_INCLUDED

void Piano12Keys(){
/*
╔═══════════════════════════════╗1
║    'W' 'E'    'T'  'Y'  'U'	║2
║    DO# RE#    FA#  SOL# LA#	║3
║ ┌──███─███──┬──███─███─███──┐	║4
║ │  ███ ███  │  ███ ███ ███  │	║5
║ │  ███ ███  │  ███ ███ ███  │	║6
║ │  ███ ███  │  ███ ███ ███  │	║7
║ │   │   │   │   │   │   │   │	║8
║ │   │   │   │   │   │   │   │	║9
║ └───┴───┴───┴───┴───┴───┴───┘	║10
║  DO  RE  MI  FA  SOL LA  SI 	║11
║ 'A' 'S' 'D' 'F' 'G' 'H' 'J'	║12
╚═══════════════════════════════╝13
*/

int x,y;

x=2;
y=7;
gotoxy(x,y);
//Linea superior:
cout<<(char)201;//╔
for(int i=0; i<31;i++)cout<<(char)205;//═══════════════════════════════
cout<<(char)187;//╗
//fila 2:
y++;
gotoxy(x,y);
cout<<(char)186<<"    'W' 'E'    'T'  'Y'  'U' 	 "<<(char)186;
//fila 3:
y++;
gotoxy(x,y);
cout<<(char)186<<"    DO# RE#    FA#  SOL# LA#	 "<<(char)186;
//fila 4:
y++;
gotoxy(x,y);//║ ┌──███─███──┬──███─███─███──┐ ║
cout<<(char)186<<" "<<(char)218<<(char)196<<(char)196<<(char)219<<(char)219<<(char)219<<(char)196<<(char)219<<(char)219<<(char)219;
cout<<(char)196<<(char)196<<(char)194<<(char)196<<(char)196<<(char)219<<(char)219<<(char)219<<(char)196<<(char)219<<(char)219<<(char)219;
cout<<(char)196<<(char)219<<(char)219<<(char)219<<(char)196<<(char)196<<(char)191<<" "<<(char)186;
//fila 5,6 y 7:
for(int i=0;i<3;i++){
    y++;
    gotoxy(x,y);//║ │  ███ ███  │  ███ ███ ███  │ ║
    cout<<(char)186<<" "<<(char)179<<"  "<<(char)219<<(char)219<<(char)219<<" "<<(char)219<<(char)219<<(char)219;
    cout<<"  "<<(char)179<<"  "<<(char)219<<(char)219<<(char)219<<" "<<(char)219<<(char)219<<(char)219<<" ";
    cout<<(char)219<<(char)219<<(char)219<<"  "<<(char)179<<" "<<(char)186;
}
//fila 8 y 9:
for(int i=0;i<2;i++){
    y++;
    gotoxy(x,y);//║ │   │   │   │   │   │   │   │ ║
    cout<<(char)186<<" "<<(char)179<<"   "<<(char)179<<"   "<<(char)179<<"   "<<(char)179<<"   "<<(char)179<<"   ";
    cout<<(char)179<<"   "<<(char)179<<"   "<<(char)179<<" "<<(char)186;
}
//fila 10:
y++;
gotoxy(x,y);//║ └───┴───┴───┴───┴───┴───┴───┘ ║
cout<<(char)186<<" "<<(char)192;
for(int i=0;i<6;i++)cout<<(char)196<<(char)196<<(char)196<<(char)193;
cout<<(char)196<<(char)196<<(char)196<<(char)217<<" "<<(char)186;
//fila 11:
y++;
gotoxy(x,y);
cout<<(char)186<<"  DO  RE  MI  FA  SOL LA  SI 	 "<<(char)186;
//fila 12:
y++;
gotoxy(x,y);
cout<<(char)186<<" 'A' 'S' 'D' 'F' 'G' 'H' 'J'	 "<<(char)186;
y++;
gotoxy(x,y);
//Linea inferior:
cout<<(char)200;//╚
for(int i=0; i<31;i++)cout<<(char)205;//═══════════════════════════════
cout<<(char)188;//╝
}

#endif // PIANOCOUT_H_INCLUDED
