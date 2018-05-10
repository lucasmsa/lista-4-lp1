#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Q4-Lista4-Main.h"
#include "Q4-Lista4-TrabalhadorAssalariado.h"
#include "Q4-Lista4-TrabalhadorPorHora.h"

using namespace std;


void main::ImprimirResultados()
    {
        cout << this->calcularPagamento1(50) << endl;
        cout << this->calcularPagamento2(50) << endl;
    }

int main()
{

TrabalhadorAssalariado trabalhadorin;
trabalhadorin.nome = "Joao";
trabalhadorin.salario = 500;

TrabalhadorPorHora trabalhadorao;
trabalhadorao.nome = "Jose";
trabalhadorao.salario = 15;


ImprimirResultados();
}
