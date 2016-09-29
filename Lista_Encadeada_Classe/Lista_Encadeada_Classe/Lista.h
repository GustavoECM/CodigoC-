#pragma once
#include <iostream>

using namespace std;

typedef struct Listah {
	int numMat;
	string nome;  
	float media;
	struct  Listah* proxima; //aponta para a proxima lista de alunos.
}Listah;

class Lista
{
public:

	Lista();
	void listaImprimir(Listah* l);
	Listah* listaCriar(void);
	bool listaVazia(Listah* l);
	Listah* insirirAluno(Listah* l, int mat, string nome, float nota);
	int contaNos(Listah* l);
	int contaNos(Listah* l, int cont);
	int listaProfundidade(Listah*L, int mat);
	int listaAltura(Listah* l, int mat);
	int listaIguais(Listah* l, Listah* m);
	int lista_Iguais(Listah* l, Listah* m);


};

