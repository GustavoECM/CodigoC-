#include "stdafx.h"
#include <iostream>

using namespace std;

typedef struct arvore {

	int info;
	struct arvore* sae;
    struct arvore* sad;

}Arvore;

Arvore* criar();
void liberar(Arvore* i);
Arvore* criar_no(int vlr,Arvore*esq, Arvore*dir);
bool existe(Arvore* i, int vlr);
void imprimir(Arvore*i);
int qtde(Arvore *a);
bool arvoreIguais(Arvore *a, Arvore *b);
bool vazia(Arvore *i);

int main()
{
		
 
	Arvore* d = criar_no(1,criar(), criar());
	Arvore* b = criar_no(2, criar(), d);
	Arvore* e = criar_no(3, criar(), criar());
	Arvore* f = criar_no(4, criar(), criar());
	Arvore* c = criar_no(5, e, f);
	Arvore* a = criar_no(6, b, c);
	Arvore* g = a;


	imprimir(a);

	cout << qtde(a);
	cout << arvoreIguais(a, b);

	cin.get();
	cin.get();
	return 0;
}

Arvore* criar()
{
	return NULL;
}

void liberar(Arvore* i ) {

	if (i!= NULL) {
		liberar(i->sae);
		liberar(i->sae);

		free(i);
	}

}

Arvore* criar_no(int vlr, Arvore* esq, Arvore*dir) {
	Arvore* p = new Arvore;

	p->info = vlr;
	p->sae = esq;
	p->sad = dir;

	return p;
}

bool existe(Arvore* i, int vlr){

	if(i ==  NULL) 
		return false;
    
	if (i->info != vlr)
		return i->info ==vlr || existe (i->sae,vlr) || existe(i->sad, vlr);

}

void imprimir(Arvore* i){

	if (i != NULL) {
		cout << i->info << "\n";
		imprimir(i->sae);
		imprimir(i->sad);

	}
	  	 

}

int qtde(Arvore *a) {

	if (a == NULL) {
		return 0;
	}
	return  1 + qtde(a->sad) + qtde(a->sae);
}

bool vazia(Arvore *i) {
	return i == NULL;
}

bool arvoreIguais(Arvore *a, Arvore *b) {

	return (vazia(a) && vazia(b) || (!vazia(a)&&!vazia(b) && a->info == b->info && arvoreIguais(a->sae,b->sae) && arvoreIguais(a->sad, b->sad)));

}
