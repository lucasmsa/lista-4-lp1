#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica
{
private:
    double raio;
public:
    void setraio(double raio);
    double getraio();
    double CalcularAreaC();
};


#endif // CIRCULO_H_INCLUDED
