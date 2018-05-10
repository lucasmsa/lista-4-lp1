#ifndef FIGURAGEOMETRICA_H_INCLUDED
#define FIGURAGEOMETRICA_H_INCLUDED
#include <string>


class FiguraGeometrica
{
private:
    std::string nome;
public:
    FiguraGeometrica();
    void setnome(std::string nome);
    std::string getnome();
    double calcularArea();
};



#endif // FIGURAGEOMETRICA_H_INCLUDED
