/*
 * Loop10k.cpp
 *
 *  Created on: 28 de jul. de 2022
 *      Author: Eduardo
 */

#include <iostream>
#include <chrono> 		// let´s marcar a hora
#include <ctime> 		// because some timestamp is aways good.
#include "Loop10k.h"

using namespace std;


Loop10k::Loop10k() {
	cout << "Chrono-looper object created!" << endl;

}

void Loop10k::RodaLoop() // let´s que Let´s ... vamos rodar o big loop....
{
	auto start = std::chrono::system_clock::now(); // inicializando o contador de tempo

	int contapontos = 0;

	system ("CLS");
	cout << "welcome to the incredible loop counter, relax and enjoy. " << endl;
	cout << endl;
	cout << "placing one dot for each 100 interactions : " << endl;
	for(int i =1;i <=10000 ;i++)
		{
			for(int j =1; j <= 100 ; j++) // i know that is a big useless solution but, it´s a way that work ok ?
			{
				if (j == 100)
				{
					cout << "." << flush;
					contapontos++;
					if (contapontos ==100)
					{
						i = 10000;  // well... it´s like a break, but more funny.
									// huh... ok, you don´t see this, just keep scrolling.
						cout << endl;

					}
				}

			}
		}
	auto end = std::chrono::system_clock::now(); // Fim da contagem
	std::chrono::duration<double> Segundos_decorridos = end-start; // armazena o tempo final menos o tempo inicial, em segundos
	std::time_t Fim = std::chrono::system_clock::to_time_t(end); // armazena no Fim a bendida da data-hora do fim do processo

	// sim, decidi misturar os dois idiomas na saída de text, mas me chama pra entrevista que garanto que vai gostar de mim.
	// yes i know, i was mixing both idioms , please, just give me a chance and lets take a coffe togueter during the interview ok ?
	cout << "cálculo executado no dia: " << std::ctime(&Fim) << "Segundos decorridos: " << Segundos_decorridos.count() << "s" << endl;
	cout << "total de pontos: " << contapontos << endl;
	exit(0);
}



// ============================================================================================


void Loop10k::RodaLoopFast() // porque simplismente eu quero um metodo mais rapido, ou menos idiota.
{
	auto start = std::chrono::system_clock::now();

	int contapontos = 0;

	system ("CLS");
	cout << "welcome to the fastest loop counter, watch and enjoy!" << endl;
	cout << endl;
	cout << "placing one dot for each 100 interactions : " << endl;

	for(int i =1;i <=10000 ;i++)
	{
		if (i%100 == 0)
		{
			cout << "." << flush;
			contapontos++;
		}
	}
	cout << endl;
	auto end = std::chrono::system_clock::now(); // Fim da contagem
		std::chrono::duration<double> Segundos_decorridos = end-start;
		std::time_t Fim = std::chrono::system_clock::to_time_t(end);

		//Ok, now i was coping my own source code, no problems at all, but i think that make a function inside another will become an.
		//recursive inception, so i think that it´s better for now just copy and paste the code, ok ?
		cout << "cálculo executado no dia: " << std::ctime(&Fim) << "Segundos decorridos: " << Segundos_decorridos.count() << "s" << endl;
		cout << "total de pontos: " << contapontos << endl;
		exit(0);
}

