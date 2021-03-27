#include <iostream>
#include "FuentePoder.h"

using namespace std;

FuentePoder FuentePoder::instance;

int FuentePoder::getTension(){return this->tension;};
int FuentePoder::getIntensidad(){return this->intensidad;};
void FuentePoder::setTension(int tension){this->tension = tension;};
void FuentePoder::setIntensidad(int intensidad){this->intensidad = intensidad;};

