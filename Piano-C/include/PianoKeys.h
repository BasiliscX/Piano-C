#ifndef PIANOKEYS_H
#define PIANOKEYS_H
#include<windows.h>

class PianoKeys{
private:
    string _name;
    int _frequency;
    int _color;
public:
//Constructor:
    void DO();
    void DO_S();
    void RE();
    void RE_S();
    void MI();
    void FA();
    void FA_S();
    void SOL();
    void SOL_S();
    void LA();
    void LA_S();
    void SI();
//Getters:
    string getName();
    int getFrequency();
};

#endif // PIANOKEYS_H
