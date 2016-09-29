#include "stdafx.h"
#include <iostream>

using namespace std;

typedef struct lista {
	int info;
	struct  lista* prox; // Recebe o proximo valor do ponteiro
}Lista;

Lista* lst_criar(void) {
	return NULL;   // Prenche a LISTA com valores nulos
}

Lista* lst_inserir(Lista* l , int i) {
	
	//I = Valor a ser inserido
	//l = a lista a ser modificada

	Lista* novo = new Lista; // cria um novo no na lista 

	novo->info = i;
	novo->prox = l;

	return novo;

}

void lst_imprimir(Lista* l) {

	Lista* p;

	for (p = l; p!=NULL; p=p->prox) {
		cout << "Valor : " << p->info<<"\n";
	}

	cin.get();
	cin.get();

}

Lista* lst_buscaValor(Lista* l, int i) {

	Lista* p;

	for (p = l; p != NULL; p = p->prox) {

		if (p->info == i) {
			return p;
		}
	}
	return NULL;
}

bool lst_vazia(Lista* l) {
	 
	return (l== NULL);
  
}

Lista* lst_excluir(Lista* l , int val) {
  
	Lista* a = NULL; //ponteiro para o elemento do meio
	Lista* p = l; //ponteiro que vai percorrer a lista
     
	//procurando o elemento na lista, guardando na auxiliar ( A ) 
	while ((p != NULL) && (p->info!= val)) {
		a = p;
		p = p->prox;
	}

	if (p == NULL) {
		//elemento não encontrado
		return l;
	}

	if (a == NULL) { //elemento no inicio da lista.
		l = p->prox;
	}
	else {
		a->prox = p->prox;
	}
	free(p);

	return l;
}

Lista* separa(Lista* l, int n) {

	Lista* p;
	Lista* q;

	for (p = l; p != NULL; p = p->prox) {
		if (p->info ==n) {
			
			q = p->prox;
			p->prox = NULL;

			return q;
		}
	}
	return NULL;
}

Lista* concatena(Lista* l1, Lista* l2) {

	Lista *p;
	Lista *q;

	if (l1 == NULL)	return l2;
	
	
	p = l1;
	
	
	do {

		q = p;
		p = p->prox;

}while (p != NULL);
	
    q->prox = l2;

	return l1;

}

int main()
{
	Lista* l;
	Lista* l2;
	Lista* l3;
	
	l = lst_criar();
	l = lst_inserir(l, 1);
	l = lst_inserir(l, 3);
	l = lst_inserir(l, 2);
	
	l2 = lst_criar();
	l2 = lst_inserir(l, 5);
	l2 = lst_inserir(l, 7);
	l2 = lst_inserir(l, 9);

	l3 = concatena(l,l2);
	lst_imprimir(l3); 	
	//cout << "VALOR DA BUSCA E  " << lst_buscaValor(l,3)->info << "\n";
  	return 0;
}

