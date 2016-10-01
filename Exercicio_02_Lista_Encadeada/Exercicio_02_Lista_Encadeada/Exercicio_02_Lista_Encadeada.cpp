#include "stdafx.h" // include exclusivo do visual studio
#include <iostream>
#include <string>

using namespace std;


typedef struct no {

	string nome;
	int idade;
	double peso;
	struct no* proxima;
}no;

void noImprimir(no* l) {
	no* p = l;

	if (p == NULL) {

		cout << "Lista está vazia" << endl;

	}

	for (p = l; p != NULL; p = p->proxima) {

		cout << p->nome << endl;
		cout << p->idade << endl;
		cout << p->peso << endl;

		cout << "\n\n\n";
	}
}

no* noCriar(void) {
	return NULL;
}

no* insirirNovo(no* l, string nome, int idade, double peso) {

	no* p;
	no* x = NULL;
	no* novo = new no;

	novo->nome = nome;
	novo->idade = idade;
	novo->peso = peso;

	p = l;

	while (p != NULL && p->idade >idade)
	{
		x = p;
		p = p->proxima;
	}

	novo->idade = idade;

	//inseri o valor no fim
	if (x == NULL)
	{
		novo->proxima = l;
		l = novo;
	}
	//inserir o valor no meio
	else
	{
		novo->proxima = x->proxima;
		x->proxima = novo;
	}
	return l;

}

int contaPesosMaior(no* l , double peso) {

	no* p;
	int cont = 0;

	for (p = l; p != NULL; p=p->proxima) {
		if (p->peso > peso) {
			cont++;
		}

	}
	return cont;
}

no* noRetirar(no* l, int v)
{

	no* ant = NULL;
	no* p = l;

	while (p != NULL && p->idade != v)
	{
		ant = p;
		p = p->proxima;
	}

	if (p == NULL)
		return l;

	if (ant == NULL)
	{
		l = p->proxima;
	}
	else {
		ant->proxima = p->proxima;
	}
	return l;
}

int retornaAltura( no* l) {

	no* p;
	int contador =0;
	int cont = 0;
	double pesoMenor;

	for (p = l; p != NULL; p=p->proxima) {

		if (contador==0){
			pesoMenor = p->peso;
			
		}
		if (p->peso < pesoMenor) {
			cont = 0;
			pesoMenor = p->peso;
			cont++;
		}
		else
		{
			cont++;
		}

		contador++;
	}
	return cont;
}


int retornaPesoMaior(no* l ) {
	no* p = l;

	if (l == NULL) {
		return 0;
	}

	if (l->proxima != NULL && p->proxima != NULL ){

		if (p->peso > retornaPesoMaior(l = l->proxima)) {
			
			return (retornaPesoMaior(p)); 
		}
		else {
			return (retornaPesoMaior(l=l->proxima));
		}

	}



}

int main()
{

	cin.get();
	cin.get();

	return 0;
}

