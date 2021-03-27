#include <iostream>
#include "Circuito.h"

using namespace std;

AdaptadorTension::AdaptadorTension(Circuito* circuito){
    this->circuito = circuito;
    this->setTension(circuito->getTensionNecesaria());
    this->resistencia = this->getTension()/this->getIntensidad();
};

int AdaptadorTension::getResistencia(){return this->resistencia;};