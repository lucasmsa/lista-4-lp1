#ifndef Q4-LISTA4-TRABALHADORASSALARIADO_H_INCLUDED
#define Q4-LISTA4-TRABALHADORASSALARIADO_H_INCLUDED
#include "Q4-Lista4-Trabalhador.h"

class TrabalhadorAssalariado: public Trabalhador
{
public:
    TrabalhadorAssalariado(string a, double b)
    {
        this->nome = a;
        this->salario = b;
    }
    double calcularPagamento1(int horas)
    {
        return (horas/40)*salario;
    }
};

#endif // Q4-LISTA4-TRABALHADORASSALARIADO_H_INCLUDED
