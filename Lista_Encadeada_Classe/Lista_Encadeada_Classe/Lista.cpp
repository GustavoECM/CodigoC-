#include "stdafx.h"
#include "Lista.h"
#include <iostream>
#include <string>

using namespace std;

Lista::Lista()
{
}

int Lista::lista_Iguais(Listah* l, Listah* m) {

	if (l == NULL &&  m == NULL)
	{
		return true;
	}
	else if (l == NULL || m == NULL) {
		return false;
	}
	else {
		return (((l->nome == m->nome) && l->media == m->media) && l->numMat == m->numMat) && lista_Iguais(l->proxima, m->proxima);
	}
}

int Lista::listaIguais(Listah* l, Listah* m) {
	Listah * l1;
	Listah * l2;

	for (l1 = l, l2 = m; l1 != NULL&& l2 != NULL; l1 = l1->proxima, l2 = l2->proxima) {
		if ((l1->media != l2->media) || (l1->nome != l2->nome) || (l1->numMat != l2->numMat)) {
			return 0;
		}
	}
	return l1 == l2;
}

int Lista::listaProfundidade(Listah *l, int mat) {
	int cont = 1;

	for (l = l; l != NULL; l = l->proxima)
		if (l->numMat > mat) {
			cont++;
		}
	return cont;
}

int Lista::listaAltura(Listah* l, int mat) {

	int cont = 1;

	for (l = l; l != NULL; l = l->proxima)
		if (l->numMat < mat) {
			cont++;
		}
	return cont;
}

int Lista::contaNos(Listah* l) {
	int cont = 0;

	for (Listah* nova2 = l; nova2 != NULL; nova2 = nova2->proxima) {
		cont++;
	}

	return cont;
}

int Lista::contaNos(Listah* l, int cont) {

	if (l != NULL)
	{
		l = l->proxima;
		return contaNos(l, cont += 1);
	}

	if (l == NULL)
		return cont;

}

void Lista::listaImprimir(Listah* l) {
	Listah* p = l;

	if (p == NULL) {

		cout << "Lista está vazia" << endl;

	}

	for (p = l; p != NULL; p = p->proxima) {

		cout << p->numMat << endl;
		cout << p->nome << endl;
		cout << p->media << endl;

		cout << "\n\n\n";
	}
}

Listah* Lista::insirirAluno(Listah* l, int mat, string nom, float nota) {

	Listah* p;
	Listah* x = NULL;
	Listah* novo = new Listah;

	novo->numMat = mat;
	novo->nome = nom;
	novo->media = nota;

	p = l;

	while (p != NULL && p->numMat < mat)
	{
		x = p; p = p->proxima;
	}

	novo->numMat = mat;

	if (x == NULL)
	{
		novo->proxima = l; l = novo;
	}
	else
	{
		novo->proxima = x->proxima;
		x->proxima = novo;
	}
	return l;

}

bool Lista::listaVazia(Listah* l) {
	return (l == NULL);
}

Listah* Lista::listaCriar(void) {
	return NULL;
}
