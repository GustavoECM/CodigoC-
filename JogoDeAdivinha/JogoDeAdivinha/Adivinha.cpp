#include "stdafx.h"
#include "Adivinha.h"
#include <iostream>
#include <time.h>

using namespace std;

Adivinha::Adivinha()
{
	valorAdivinhar = 0;
	gerarValor();

}

int Adivinha::getvalorAdivinhar() {

	return valorAdivinhar;
}

void Adivinha::gerarValor() {	 
	srand(time(NULL));
	 valorAdivinhar = rand() % 1000;

}

void Adivinha::jogadaPlayer() {
	  
	int valor, score = 0 ,chance = 15 ;

	while ( chance != 0  ){
		
		cout << "Digite um valor inteiro de 0 A 1000 : ";
		cin >> valor;
		cout << "\n";

		if (valor == getvalorAdivinhar()) {
			cout << "Parabens! Voce adivinhou o valor!!! Que era : " << valor << endl;
			cout << "NOVA RODADA, VOCE GANHOU MAIS 10 CHANCES  :-)" << endl;
			
			score +=  100*chance;
			chance += 10;
		 	
			gerarValor();
		  
			cout << "Score  : " << score << endl;
			cout << "Chances: " << chance << endl;

		} 
		else if (valor < getvalorAdivinhar()) {
				cout << "Este valor esta muito baixo "<< endl ;
				chance -= 1;
		}
		else {
			cout << "Esta valor esta muito alto " << endl;
			chance -= 1;
		}
		cout << "Chances: " << chance << endl;
		
	}
	for (int i = 0; i < 100; i++)cout <<"\n";
	cout << "VOCE PERDEU, NAO FOI CAPAZ :-( " << endl;
	cout << "Score  : " << score << endl;
	cout << "Chances: " << chance << endl;
}


