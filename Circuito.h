#ifndef CIRCUITO_H_
#define CIRCUITO_H_

#include "FuentePoder.h"

class AdaptadorTension;

class Circuito{
    private:
        int tensionNecesaria;
        int intensidadNecesaria;
    public:
        Circuito();
        Circuito(int tension, int intensidad);
        bool suficienteTension(FuentePoder fuente);
        bool suficienteTension(AdaptadorTension fuente);
        int getInstensidadNecesaria();
        int getTensionNecesaria();
};

class AdaptadorTension : public FuentePoder {
    private:
        int resistencia;
        Circuito* circuito;
    public:
        AdaptadorTension(Circuito* circuito);
        int getResistencia();
};

#endif /* ADAPTADORES_H_*/