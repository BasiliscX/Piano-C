#ifndef HINTCOUT_H_INCLUDED
#define HINTCOUT_H_INCLUDED

#include "PianoKeys.h"

void Hint(int duration, PianoKeys pFrequency[], int i){
int x,y;

x=40;
y=8;
gotoxy(x,y);
cout<<"Hint:";
x+=5;
y++;
gotoxy(x,y);
cout<<"o Press 'Espace' for more Duration.";
y++;
gotoxy(x,y);
cout<<"o Press 'N' for default Duration.";
y++;
gotoxy(x,y);
cout<<"o Press 'L' for less Duration.";
y++;
gotoxy(x,y);
cout<<"o Press 'Esc' to exit.";
x=40;
y+=2;
gotoxy(x,y);
cout<<"Duration: "<<duration;
y++;
gotoxy(x,y);
if(i>=0&&i<=11){
    cout<<"Frequency: "<<pFrequency[i].getFrequency()<<"       ";
    x=42;
    y+=2;
    gotoxy(x,y);
    int fCout=pFrequency[i].getFrequency()/20;
    for(int i=0;i<=25;i++)cout<<" ";
    x=42;
    gotoxy(x,y);
    for(int i=0;i<=fCout;i++)cout<<(char)176;
}
else{
    cout<<"Frequency: 0   ";
    x=42;
    y+=2;
    gotoxy(x,y);
    for(int i=0;i<=25;i++)cout<<" ";
}
}

#endif // HINTCOUT_H_INCLUDED
