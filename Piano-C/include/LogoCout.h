#ifndef LOGOCOUT_H_INCLUDED
#define LOGOCOUT_H_INCLUDED

/*
┏┓•      ┏┓╻
┃┃┓┏┓┏┓┏┓  ┃ ┃
┣┛┗┗┻┛┗┗┛  ┗┛•
*/
void Logo(){
int x,y;

x=30;
y=2;
gotoxy(x,y);
for(int i=0;i<12;i++)cout<<(char)32;
cout<<(char)191;
y++;
gotoxy(x,y);
cout<<(char)218<<(char)191<<(char)167<<(char)32<<(char)32<<(char)32<<(char)32<<(char)32<<(char)32<<(char)32<<(char)218<<(char)191<<(char)179;
y++;
gotoxy(x,y);
cout<<(char)179<<(char)179<<(char)191<<(char)218<<(char)191<<(char)218<<(char)191<<(char)218<<(char)191<<(char)32<<(char)179<<(char)32<<(char)192;
y++;
gotoxy(x,y);
cout<<(char)195<<(char)217<<(char)192<<(char)192<<(char)193<<(char)217<<(char)192<<(char)192<<(char)217<<(char)32<<(char)192<<(char)217<<(char)167;
}

#endif // LOGOCOUT_H_INCLUDED
