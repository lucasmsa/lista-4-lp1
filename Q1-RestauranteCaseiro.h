#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H


class RestauranteCaseiro
{
    private:
    MesaDeRestaurante mesas[100];

    public:
        void adicionaAoPedido(int, int, int);
        double calculaTotalRestaurante();
};

#endif // RESTAURANTECASEIRO_H
