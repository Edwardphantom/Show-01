/*
 * Calculadora.cpp
 *
 *  Created on: 28 de jul. de 2022
 *      Author: Eduardo
 */

#include <iostream>
#include <limits> 			//nescessário pra reduzir a possibilidade do usuário fazer besteira
#include "Calculadora.h"
using namespace std;


void Calculadora::calculasegundos()
{
	unsigned int segundos;
	unsigned int C_Horas;
	unsigned int C_Minutos;
	unsigned int C_SegRest;
	unsigned int C_Segundos;

	system ("CLS");
	cout << "hi! this is our function to convert pure seconds to hours,minutes and, of course, seconds!" << endl;
	cout<< "please, inform a random number of seconds to be calculated, max of 10 digits please : " << flush;
	cin >> segundos;

	while (!std::cin.good())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // solution to limit the possibilities of user wrong input
			cout << endl;
			cout << "please, inform a random number of seconds to be calculated, max of 10 digits please : " << flush;
			std::cin >> segundos;
		}
	if (segundos >= 3600 )
	{
		C_Horas = segundos/3600;
		C_SegRest = segundos%3600; // hold remainder seconds
		if (C_SegRest >=60 )
		{
			C_Minutos = C_SegRest/60;
			C_Segundos = C_SegRest%60;
		}
	}
	else if (segundos >=60)
	{
	C_Horas = 0;
	C_Minutos = segundos/60;
	C_Segundos = segundos%60;
	}
	else
	{
		C_Horas = 0;
		C_Minutos = 0;
		C_Segundos = segundos;
	}
cout << endl;
cout << "Cálculo finalizado, obrigado por aguardar, temos : " << endl;
cout << "horas: "   << C_Horas 		<< endl;
cout << "Minutos: " << C_Minutos 	<< endl;
cout << "Segundos:" << C_Segundos	<< endl;
cout << endl;
cout << "ou simplismente: " << C_Horas << "h:" << C_Minutos <<"m:" << C_Segundos	<< "s" << endl;

}
