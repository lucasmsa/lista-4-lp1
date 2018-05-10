#ifndef Q4-LISTA4-TRABALHADORPORHORA_H_INCLUDED
#define Q4-LISTA4-TRABALHADORPORHORA_H_INCLUDED
#include "Q4-Lista4-Trabalhador.h"

class TrabalhadorPorHora: public Trabalhador
{
public:
    TrabalhadorPorHora(string a, double b)
    {
        this->nome = a;
        this->salario = b;
    }
    double calcularPagamento2(int horas)
    {
        if (horas <= 40)
        {
            return salario*horas;
        }
        else
            return 40*salario + (horas - 40)*1.5*salario;
    }
};

#endif // Q4-LISTA4-TRABALHADORPORHORA_H_INCLUDED
