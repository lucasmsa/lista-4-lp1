#include "Pedido.h"

int Pedido::getNumero()
{
    return this->numero;
}

string Pedido::getDescricao()
{
    return this->descricao;
}

int Pedido::getQuantidade()
{
    return this->quantidade;
}

double Pedido::getPreco()
{
    return this->preco;
}

void Pedido::setNumero(int n)
{
    this->numero = n;
}

void Pedido::setDescricao(string d)
{
    this->descricao = d;
}

void Pedido::setQuantidade(int q)
{
    this->quantidade = q;
}

void Pedido::setPreco(double p)
{
    this->preco = p;
}
