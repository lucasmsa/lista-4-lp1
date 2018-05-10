#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#include "Pedido.cpp"


sing namespace std;

class MesaDeRestaurante
{

public:
    Pedido pedidoso[100];
    void adicionaAoPedido(int, string, int, double);
    void zeraPedidos();
    double calculaTotal();

};

#endif // MESADERESTAURANTE_H
