#include <iostream>
#include "FuentePoder.h"
#include "Circuito.h"

using namespace std;

int main(){
    FuentePoder::getInstance().setIntensidad(1);
    FuentePoder::getInstance().setTension(3);

    Circuito circuito = Circuito(4,1);
    AdaptadorTension nuevaFuente = AdaptadorTension(&circuito);
    bool suficiente = circuito.suficienteTension(nuevaFuente);
    cout << suficiente << endl;
    suficiente = circuito.suficienteTension(FuentePoder::getInstance());
    cout << suficiente << endl;
}

