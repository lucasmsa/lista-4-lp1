#include <iostream>
#include "Triangulo.h"
#include "FiguraGeometrica.h"

Triangulo T;

void Triangulo::setbase(double base)
{
    this->base = base;
}
double Triangulo::getbase()
{
    return base;
}
void Triangulo::setaltura(double altura)
{
    this->altura = altura;
}
double Triangulo::getaltura()
{
    return altura;
}
double Triangulo::CalcularAreaT()
{
    return (base*altura)/(2);
}



