#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H


class MesaDeRestaurante
{
    private:
    Pedido pedidoso[100];

public:
    MesaDeRestaurante();
    void adicionaAoPedido(int, string, int, double);
    void zeraPedidos();
    double calculaTotal();
};

#endif // MESADERESTAURANTE_H
