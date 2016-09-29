#include "stdafx.h"
#include "ListaCade.h"
#include <iostream>

using namespace std;

ListaCade::ListaCade()
{
}

int ListaCade::listaProfundidade(Lista *l, int mat) {
	int cont = 1;

	for (l = l; l != NULL; l = l->proxima)
		if (l->numMat > mat) {
			cont++;
		}
	return cont;
}

int ListaCade::listaAltura(Lista* l, int mat) {

	int cont = 1;

	for (l = l; l != NULL; l = l->proxima)
		if (l->numMat < mat) {
			cont++;
		}
	return cont;
}

int ListaCade::contaNos(Lista* l) {
	int cont = 0;

	for (Lista* nova2 = l; nova2 != NULL; nova2 = nova2->proxima) {
		cont++;
	}

	return cont;
}

int ListaCade::contaNos(Lista* l, int cont) {

	if (l != NULL)
	{
		l = l->proxima;
		contaNos(l, cont += 1);
	}

	if (l == NULL)
		return cont;

}

Lista* ListaCade::insirirAluno(Lista* l, int mat, char*nom, float nota) {

	Lista* nova = new Lista;

	int n = 0;

	for (int i = 0; *(nom + i) != '\0'; i++) {
		n++;
	}

	nova->nome = new char[n];

	if (listaVazia(l) == true) {

		nova->numMat = mat;
		nova->media = nota;
		for (int i = 0; *(nom + i) != '\0'; i++)
			*(nova->nome + i) = *(nom + i);
		nova->proxima = l;

		return nova;
	}

	for (Lista* nova2 = l; nova2 != NULL; nova2 = nova2->proxima) {
		for (Lista* nova3 = l; nova3 != NULL; nova3 = nova3->proxima)
			if (mat == nova3->numMat) {
				mat++;
			}
	}

	nova->numMat = mat;
	nova->media = nota;
	for (int i = 0; *(nom + i) != '\0'; i++) {
		*(nova->nome + i) = *(nom + i);
	}
	nova->proxima = l;

	return nova;

}

bool ListaCade::listaVazia(Lista* l) {
	return (l == NULL);
}

Lista* ListaCade::listaCriar(void) {
	return NULL;
}

void ListaCade::listaImprimir(Lista* l) {
	Lista* p;

	for (p = l; p != NULL; p = p->proxima) {

		cout << p->numMat << endl;

		for (int i = 0; *(p->nome + i) != '\0'; i++) {
			cout << *(p->nome + i);
		}

		cout << p->media << endl;
		cout << p->proxima << endl;
		cout << "\n\n\n";
	}

}