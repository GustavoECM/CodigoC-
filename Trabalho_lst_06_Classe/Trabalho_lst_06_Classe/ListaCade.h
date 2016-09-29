#pragma once

#include <iostream>
using namespace std;

typedef struct Lista{
	int numMat;
	char *nome;
	float media;

	struct  Lista* proxima; //aponta para a proxima lista de alunos.

}Lista;
class ListaCade
{

public:
	ListaCade();
	void listaImprimir(Lista* l);
	Lista* listaCriar(void);
	bool listaVazia(Lista* l);
	Lista* insirirAluno(Lista* l, int mat, char*nome, float nota);
	int contaNos(Lista* l);
	int contaNos(Lista* l, int cont);
	int listaProfundidade(Lista*L, int mat);
	int listaAltura(Lista* l, int mat);
	bool listaIguais(Lista* l, Lista* m);
	bool listaIguais(Lista* l, Lista* m, bool c);


};

