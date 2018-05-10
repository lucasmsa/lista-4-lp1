#ifndef PEDIDO_H
#define PEDIDO_H

using namespace std;

class Pedido
{
   private:
    int numero;
    string descricao;
    int quantidade;
    double preco;
public:
    Pedido();
    int getNumero();
    string getDescricao();
    int getQuantidade();
    double getPreco();

    void setNumero(int);
    void setDescricao(string);
    void setQuantidade(int);
    void setPreco(double);
};

#endif // PEDIDO_H
