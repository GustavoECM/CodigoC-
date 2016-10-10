#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

//Cria uma pilha
typedef struct pilha {

	int total;
	int vet[10];

}Pilha;

//Clia uma pilha vazia.
Pilha* criar();

//Libera uma Pilha
void liberar(Pilha *p);

//Imprimir o conteudo da Pilha
void imprimirPilha(Pilha *p); 

//Inseri um item no ultimo indice da Pilha
void push(Pilha *p, int val);

//Retira o ultimo item da Pilha
int pop(Pilha *p);

int main() {

	Pilha *a = criar(); // Cria uma Pilha
	 
	
	push(a, 1); //Inseri um item na Pilha
	push(a, 2);
	push(a, 3);
	imprimirPilha(a);   //Imprime a Pilha

	pop(a); //Remove o ultimo item da Pilha
	imprimirPilha(a);   //Imprime a Pilha

	return 0;
}

//Clia uma pilha vazia.
Pilha* criar() {
	Pilha *p = new Pilha;
	p->total = 0;
	return p;
}

//Libera o espaço da Pilha
void liberar(Pilha *p){
	free(p); //Liberar o  espaço do ponteiro.
}

//Imprime a Pilha
void imprimirPilha(Pilha *p) {
	for (int i = p->total - 1; i >= 0; i--)
		cout << p->vet[i] << "\n";

	cout << endl;
}

//Inseri um item na Pilha
void push(Pilha *p, int val) {
	if (p->total == 10) {
		cout << "Estorou memoria";
	}
	else
	{
		p->vet[p->total] = val;
		p->total++;
	}
}

//Remove o ultimo valor da pilha
int pop(Pilha *p) {

	if (p->total != 0) {
		int v = p->vet[p->total - 1];
		p->total--;
		return v;
	}
	return -1;
}