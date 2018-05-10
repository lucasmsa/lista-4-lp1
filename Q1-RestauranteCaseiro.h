#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H


using namespace std;

class RestauranteCaseiro
{
    MesaDeRestaurante mesas[100];

public:
    void adicionaAoPedidoMesa(int, string, int, int, double);
    double calculaTotalRestaurante();
};


#endif // RESTAURANTECASEIRO_H
