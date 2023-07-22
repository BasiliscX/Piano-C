#include<iostream>
using namespace std;
#include "PianoKeys.h"

//constructor:
void PianoKeys::DO(){
    _name="DO";
    _frequency=262; //Trunc.
}
void PianoKeys::DO_S(){
    _name="DO SHARP";
    _frequency=277;
}
void PianoKeys::RE(){
    _name="RE";
    _frequency=294;
}
void PianoKeys::RE_S(){
    _name="RE SHARP";
    _frequency=311;
}
void PianoKeys::MI(){
    _name="MI";
    _frequency=330;
}
void PianoKeys::FA(){
    _name="FA";
    _frequency=349;
}
void PianoKeys::FA_S(){
    _name="FA SHARP";
    _frequency=370;
}
void PianoKeys::SOL(){
    _name="SOL";
    _frequency=392;
}
void PianoKeys::SOL_S(){
    _name="SOL SHARP";
    _frequency=415;
}
void PianoKeys::LA(){
    _name="LA";
    _frequency=440;
}
void PianoKeys::LA_S(){
    _name="LA SHARP";
    _frequency=466;
}
void PianoKeys::SI(){
    _name="SI";
    _frequency=494;
}
//Getters:
string PianoKeys::getName(){
    return _name;
}
int PianoKeys::getFrequency(){
    return _frequency;
}
