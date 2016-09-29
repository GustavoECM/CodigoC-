#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct lista {
	int info;
	struct lista* prox;
} Lista;

Lista* lst_criar(void) {//Informa ao pre processador que a função não retornará nada
	return NULL;
}

Lista* lst_inserir(Lista* l, int i) {//Insere na primeira posição
	Lista* novo = new Lista;

	novo->info = i;
	novo->prox = l;

	return novo;
}

void lst_imprimir(Lista* l) {
	Lista* p;

	for (p = l; p != NULL; p = p->prox) {
		cout << p->info << endl;
	}
}

bool lst_vazia(Lista* l) {
	return (l == NULL);
}

Lista* lst_busca(Lista* l, int num) {

	for (Lista* p = l; p != NULL; p = p->prox) if (p->info == num) return p;

	return NULL;

}

Lista* lst_excluir(Lista* l, int val) {
	Lista* a = NULL;//ponteiro para o elemento anterior
	Lista* p = l;//ponteiro que vai percorrer a lista

				 //procurando o elemento na lista, guardando nó na auxiliar a
	while (p != NULL && p->info != val) {
		a = p;
		p = p->prox;
	}

	if (p == NULL) return l;

	if (a == NULL) {
		l = p->prox;
	}
	else {
		a->prox = p->prox;
	}

	//free(p);

	return l;
}

int main(int argc, char **argv)
{
	Lista* l;
	l = lst_criar();
	l = lst_inserir(l, 2);
	l = lst_inserir(l, 3);
	l = lst_inserir(l, 5);
	l = lst_inserir(l, 9);
	l = lst_inserir(l, 1);

	lst_imprimir(l);

	l = lst_excluir(l, 1);
	cout << "===\n";
	lst_imprimir(l);


	return 0;
}
