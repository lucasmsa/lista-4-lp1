#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"

using namespace std;

Circulo C;

void Circulo::setraio(double raio)
{
    this->raio = raio;
}
double Circulo::getraio()
{
    return raio;
}
double Circulo::CalcularAreaC()
{
    return (raio*raio)*(3.14);
}
