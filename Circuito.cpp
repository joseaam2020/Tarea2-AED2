#include <iostream>
#include "Circuito.h"

using namespace std;

class AdaptadorTension;

Circuito::Circuito(int tension, int intensidad){
    this->intensidadNecesaria = intensidad;
    this->tensionNecesaria = tension;
};

bool Circuito::suficienteTension(FuentePoder fuente){
    if(fuente.getTension() == this->tensionNecesaria){
        return true;
    } else {
        return false;
    }
};
bool Circuito::suficienteTension(AdaptadorTension fuente){
    if(fuente.getTension() == this->tensionNecesaria){
        return true;
    } else {
        return false;
    }
};
int Circuito::getInstensidadNecesaria(){
    return this->intensidadNecesaria;
};
int Circuito::getTensionNecesaria(){
    return this->tensionNecesaria;
};