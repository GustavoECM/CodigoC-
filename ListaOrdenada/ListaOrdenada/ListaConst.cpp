#include <iostream>
#include "Lista.h"

using namespace std;

ListaOrdenada::ListaOrdenada() {

	for (int i = 0; i < getMax(); i++)
	{
		lista[i] = NULL;
	}
}

int ListaOrdenada::getMax() {
	return MAX;
}

int ListaOrdenada::retTamanhoLista() {
	int tamanho = sizeof(lista) / sizeof(int);

	return tamanho;
}

bool ListaOrdenada::listaVazia() {

	for (int i = 0; i < retTamanhoLista(); i++) {
		if (lista[i] == 0)
		{
			return true;
		}
		else {
			return false;
		}

	}
}