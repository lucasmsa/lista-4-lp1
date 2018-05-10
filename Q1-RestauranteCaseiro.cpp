#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}
void RestauranteCaseiro::adicionaAoPedido(int m, int p, int q)
{
    mesas[m].pedidoso[p].setQuantidade(q);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double total = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            total += mesas[i].pedidoso[j].getPreco();
        }
    }
    return total;
}

