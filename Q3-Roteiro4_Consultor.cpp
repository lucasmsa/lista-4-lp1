/*
 * Consultor.cpp
 *
 *  Created on: 25/04/2018
 *      Author: tiagomaritan
 */

#include "Consultor.h"
#include <iostream>
#include <string>

using namespace std;
Consultor::Consultor():Funcionario(){
}

Consultor::Consultor(string n, string m, double s):Funcionario(n,m,s){
}

Consultor::~Consultor(){}

double Consultor::getSalario(){
	return salario*1.1;
}

double Consultor::getSalario(float percentual){
	return (salario + salario*percentual);
}


int main(){
	Funcionario f1("Thais", "12345", 3000.0);
	Consultor c1("Lincoln", "12356", 3000.0);
	Funcionario f2("Raoni", "12345", 3000.0);

	cout<< "Salario Thais: " << f1.getSalario() << endl;
	cout<< "Salario Raoni(Func): " << f2.getSalario() << endl;
	cout<< "Salario Lincoln(Default): " << c1.getSalario() << endl;
	cout<< "Salario Lincoln(20%%): " << c1.getSalario(0.2) << endl;
}

