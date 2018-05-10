#include <iostream>
#include "Consultor.h"
#include "Funcionario.h"
using namespace std;

int main(){

    Consultor c1 = Consultor();
    Funcionario f1 = Funcionario();

    f1.setNome("Romilda");
    f1.setMatricula("2017021293");
    f1.setSalario(1300.57);

    c1.setNome("Jose");
    c1.setMatricula("27364727346");
    c1.setSalario(1245.76);

    cout << f1.getNome() << endl;
    cout << f1.getMatricula() << endl;
    cout << f1.getSalario() << endl;

    cout << c1.getNome() << endl;
    cout << c1.getMatricula() << endl;
    cout << c1.getSalario() << endl;

return 0;

}
