
#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;


typedef struct fila {

	int total;
	int vet[10];
	int primeiro;

}Fila;

Fila* criar(); // Cria uma fila
void liberar(Fila *p);   //Liberar espa�o na fila
void imprimirFila(Fila *p); //imprime a fila
void push(Fila *p, int val); //inseri um item na Fila
int pop(Fila *p); //retira o primeiro item da fila;

int main() {

	Fila* j = criar();
	
	 push(j, 9);
	 push(j, 3);
	 push(j, 4);
	 imprimirFila(j);
	 pop(j);
	 imprimirFila(j);

	 cin.get();
	 cin.get();
} 

//Cria uma fila
Fila* criar() {
	Fila *p = new Fila; 
	p->total = 0;
	p->primeiro = 0;
	return p;
}

//Libera um espa�o na fila
void liberar(Fila *p) {
	free(p); //Liberar o  espa�o do ponteiro.
}

//imprime a Fila
void imprimirFila(Fila *p) {
	for (int i = p->total - 1; i >= 0; i--)
		cout << p->vet[i] << "\n";

	cout << endl;
}

//Insere um item na fila
void push(Fila *p, int val) {
	if (p->total == 10) {
		cout << "Estorou memoria";
	}
	else
	{
		p->vet[p->total] = val;
		p->total++;
	}
}

//Retira o primeiro indice da lista.
int pop(Fila *p) {

	int v = p->vet[p->primeiro];
	p->primeiro++;
	p->total--;

	return v;
}
