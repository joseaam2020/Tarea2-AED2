#ifndef FUENTEPODER_H_
#define FUENTEPODER_H_


class FuentePoder{
    private:
        int tension;
        int intensidad;
        static FuentePoder instance;
    public:
        FuentePoder();
        static FuentePoder getInstance(){
            return instance;
        };
        int getTension();
        int getIntensidad();
        void setTension(int tension);
        void setIntensidad(int intensidad);
};
#endif /* FUENTEPODER_H_*/