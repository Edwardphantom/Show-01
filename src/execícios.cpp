//============================================================================
// Name        : execícios.cpp
// Author      : Eduardo Fernandes Larrubia
// Version     : 1.0
// Copyright   : Sem copyright neste momento
// Description : Exemplo de código
// Data 	   : 18/Julho/2022
// Notes 	   : Please disregard the texts mixed in Portuguese and English
//				 if you do not understand both languages ​​at the same time,
//			     the objective is also to exemplify that I have some knowledge
//			     of both languages.  Have a Nice day :D
//============================================================================



// converter um grande numero em segundos , minutos e horas

// depois fazer um loop que rode 10.000 vezes , postando um ponto na mesma linha (flush) a cada 100 interações do loop usnado o operador de mod (%)
// fazer isso tudo indicando o progresso da melhor maneira

#include <iostream>
#include <limits> 			//nescessário pra reduzir a possibilidade do usuário fazer besteira
#include "Calculadora.h"	// library writted by me to reduce the code here.
#include "Loop10k.h"		// another library, just to do the loop
using namespace std;

void welcome();				  // prototype
int entrada();				 // prototype too :D


Calculadora calc1;
Loop10k loop1;			//instanciando as classes para poder usar, cuz.. why not ?


int main() {
	welcome();
	int option = entrada();
	switch (option)
	{
	case 1:
		calc1.calculasegundos(); // call the funcion that convert pure seconds into hours, minutes and seconds;
		break;
	case 2:
		loop1.RodaLoop();
		break;
	case 3:
		loop1.RodaLoopFast();
		break;
	default:
		cout << "fechando o programa, obrigado pela visita" << endl;
		break;
	}


	return 0;
}

void welcome()
{
		cout << "welcome to Edward's amazing software demonstrantion." << endl;
		cout << endl;
		cout << "please, select your funcion: " << endl;
		cout << "1. Seconds to hours and minutes and seconds calculator" << endl;
		cout << "2. incredible loop counter that counts until 10.000" << endl;
		cout << "3. Fastest loop counter than the other, or maybe not" << endl;
		cout << "4 ~ ∞. Close the program, thanks for asking" << endl;
		cout << endl;
		cout << "your choice: " << flush;
}

int entrada()
{
	int input;
	std::cin >> input;

	while (!std::cin.good())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // solution to limit the possibilities of user wrong input
		cout << endl;
		cout << "your choice, '1' or '2': " << flush;
		std::cin >> input;
	}

	if (input ==1 || input ==2 || input ==3)
			{
				system ("CLS"); // limpa a tela para que possamos ter uma visão melhor
				return input;
			}
			else
			{
				input = 0;
				system ("CLS");
				return input;
			}
}


