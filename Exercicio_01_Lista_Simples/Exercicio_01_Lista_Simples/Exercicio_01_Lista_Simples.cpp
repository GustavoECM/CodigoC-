// Exercicio_01_Lista_Simples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int ultimo;
const int MAX = 10;
int lista[MAX];

bool estaCheia() {
	return ultimo == MAX;
}

bool insert(int element, int posicao) {
	if (estaCheia() || posicao < 0 || posicao > ultimo + 1)
		return false;

	for (int i = ultimo + 1; i > posicao; i--) {
		lista[i] = lista[i - 1];
	}
	ultimo++;
	lista[posicao] = element;
	return true;
}


int main()
{
    return 0;
}

