#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica
{
private:
    double base;
    double altura;
public:
    void setbase(double base);
    double getbase();
    void setaltura(double altura);
    double getaltura();
    double CalcularAreaT();
};



#endif // TRIANGULO_H_INCLUDED
