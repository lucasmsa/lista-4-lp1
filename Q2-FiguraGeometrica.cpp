#include <iostream>
#include "FiguraGeometrica.h"

using namespace std;

FiguraGeometrica FG;

void FiguraGeometrica::setnome(string nome)
{
    this->nome = nome;
}
string FiguraGeometrica::getnome()
{
    return nome;
}



