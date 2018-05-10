/*
 * Funcionario.cpp
 *
 *  Created on: 25/04/2018
 *      Author: tiagomaritan
 */

#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario(){
	this->nome = "";
	this->matricula = "";
	this->salario = 0.0;
}

Funcionario::Funcionario(string nome, string mat, double sal){
	this->nome = nome;
	this->matricula = mat;
	this->salario = sal;
}

Funcionario::~Funcionario(){}

string Funcionario::getNome(){
	return nome;
}

string Funcionario::getMatricula(){
	return matricula;
}
double Funcionario::getSalario(){
	return salario;
}

void Funcionario::setNome(string nome){
	this->nome = nome;
}
void Funcionario::setMatricula(string mat){
	this->matricula = mat;
}
void Funcionario::setSalario(double sal){
	this->salario = sal;
}
