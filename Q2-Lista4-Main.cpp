#ifndef Q2-LISTA4-MAIN_CPP_INCLUDED
#define Q2-LISTA4-MAIN_CPP_INCLUDED
#include "Triangulo.h"
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Quadrado.h"
#include <string>
#include <iostream>
#include <string.h>
using namespace std;


Quadrado Q;
Circulo C;
Triangulo T;
FiguraGeometrica FG;

int main()
{
    C.setraio(3);
    T.setbase(2);
    T.setaltura(10);
    Q.setlado(2);
    cout << "Lado do quadrado 2 ["<< Q.getlado() << "] Area do quadrado " << Q.CalcularAreaQ() << endl;

    cout << "Raio do circulo 3 ["<< C.getraio() << "] Area do circulo " << C.CalcularAreaC() << endl;

    cout << "Base do triangulo ["<< T.getbase() << "] Altura do triangulo [" << T.getaltura() << "] Area do triangulo " << T.CalcularAreaT() << endl;
}




#endif // Q2-LISTA4-MAIN_CPP_INCLUDED
