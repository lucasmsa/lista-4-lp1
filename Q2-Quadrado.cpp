#include <iostream>
#include "Quadrado.h"
#include "FiguraGeometrica.h"

using namespace std;

Quadrado Q;

void Quadrado::setlado(double lado)
{
    this->lado = lado;
}
double Quadrado::getlado()
{
    return lado;
}
double Quadrado::CalcularAreaQ()
{
    return lado*lado;
}
