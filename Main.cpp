#include <iostream>

using namespace std;

class Bateria{
    private:
        int tension;
        int intensidad;
    public:
        Bateria(int tension, int intensidad){
            this->tension = tension;
            this->intensidad = intensidad;
        };
        int getTension(){return this->tension;};
        int getIntensidad(){return this->intensidad;};
};

class Circuito{
    private:
        int tensionNecesaria;
        int intensidadNecesaria;
    public:
        Circuito(int tension, int intensidad){
            this->intensidadNecesaria = intensidad;
            this->tensionNecesaria = tension;
        };
        int getInstensidadNecesaria(){
            return this->intensidadNecesaria;
        };
        int getTensionNecesaria(){
            return this->tensionNecesaria;
        };
};