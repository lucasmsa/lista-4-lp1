#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{



}

void MesaDeRestaurante::adicionaAoPedido(int n, string d, int q, double p)
{
    for (int i = 0; i < 100; i++)
    {
        if (pedidoso[i].getNumero() != 0)
        {
            pedidoso[i].setNumero(n);
            pedidoso[i].setDescricao(d);
            pedidoso[i].setQuantidade(q);
            pedidoso[i].setPreco(p);
            break;
        }
    }
}
void MesaDeRestaurante::zeraPedidos()
{
    for (int i = 0; i < 100; i++)
    {
            pedidoso[i].setNumero(0);
            pedidoso[i].setDescricao("");
            pedidoso[i].setQuantidade(0);
            pedidoso[i].setPreco(0);
    }
}

double MesaDeRestaurante::calculaTotal()
{
    double total = 0;
    for (int i = 0; i < 100; i++)
    {
        total += pedidoso[i].getPreco();
    }
    return total;
}
