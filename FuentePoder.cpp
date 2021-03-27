#include <iostream>
#include "FuentePoder.h"

using namespace std;

FuentePoder FuentePoder::instance;

FuentePoder::FuentePoder(){
    this->tension = 1;
    this->intensidad = 1;
}

int FuentePoder::getTension(){return this->tension;};
int FuentePoder::getIntensidad(){return this->intensidad;};
void FuentePoder::setTension(int tension){this->tension = tension;};
void FuentePoder::setIntensidad(int intensidad){this->intensidad = intensidad;};

