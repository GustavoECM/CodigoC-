#pragma once

const int MAX = 5 ;

class ListaOrdenada{
public:
	int lista[MAX];
private:
	ListaOrdenada();
	int getMax();
	int retTamanhoLista();
	bool listaVazia();
};