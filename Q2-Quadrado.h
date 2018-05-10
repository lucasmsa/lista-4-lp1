#ifndef QUADRADO_H_INCLUDED
#define QUADRADO_H_INCLUDED
#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica
{

public:
    void setlado(double lado);
    double getlado();
    double CalcularAreaQ();
    double lado;
};


#endif // QUADRADO_H_INCLUDED
