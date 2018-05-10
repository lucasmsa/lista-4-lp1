/*
 * Consultor.h
 *
 *  Created on: 25/04/2018
 *      Author: tiagomaritan
 */

#ifndef CONSULTOR_H_
#define CONSULTOR_H_

#include "Funcionario.h"

class Consultor: public Funcionario{

	public:
		Consultor();
		Consultor(std::string, std::string, double);
		virtual ~Consultor();

		double getSalario();
		double getSalario(float);
};

#endif /* CONSULTOR_H_ */
