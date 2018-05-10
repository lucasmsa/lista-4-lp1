/*
 * Funcionario.h
 *
 *  Created on: 25/04/2018
 *      Author: tiagomaritan
 */

#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_

#include <string>

class Funcionario {
	protected:
		std::string nome;
		std::string matricula;
		double salario;
	public:
		Funcionario();
		Funcionario(std::string, std::string, double);
		virtual ~Funcionario();

		std::string getNome();
		std::string getMatricula();
		double getSalario();


		void setNome(std::string);
		void setMatricula(std::string);
		void setSalario(double);
};

#endif /* FUNCIONARIO_H_ */
