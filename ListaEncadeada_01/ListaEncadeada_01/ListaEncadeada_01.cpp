#include "stdafx.h" // Include exclusivo do visual studio se n�o for visual studio
#include <iostream>
#include <string>
using namespace std;

typedef struct Lista {
	int numMat;
	string nome;
	float media;

	struct  Lista* proxima; //aponta para a proxima lista de alunos.

}Lista;

void listaImprimir(Lista* l);
Lista* listaCriar(void);
bool listaVazia(Lista* l);
Lista* insirirAluno(Lista* l, int mat, string nome, float nota);
int contaNos(Lista* l);
int contaNos(Lista* l, int cont);
int listaProfundidade(Lista*L, int mat);
int listaAltura(Lista* l, int mat);
int listaIguais(Lista* l, Lista* m);
int lista_Iguais(Lista* l, Lista* m);

int main()
{

	Lista* Aluno = NULL;

	Aluno = insirirAluno(Aluno, 1, "Cardoso", 3.0);
	Aluno = insirirAluno(Aluno, 10, "Gustavo", 3.0);
	Aluno = insirirAluno(Aluno, 3, "Ze", 4.0);

	listaImprimir(Aluno);

	cout << "\n" << lista_Iguais(Aluno, a); // com recursividade 

	cout << "\n" << listaIguais(Aluno, a); //sem recursividade
	
	cin.get();
	cin.get();
	return 0;
}


//Fun��o Recursivsa
int lista_Iguais(Lista* l, Lista* m) {

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

//Fun��o sem recursividade
int listaIguais(Lista* l, Lista* m) {
	Lista * l1;
	Lista * l2;

	for (l1 = l, l2 = m; l1 != NULL&& l2 != NULL; l1 = l1->proxima, l2 = l2->proxima) {
		if ((l1->media != l2->media) || (l1->nome != l2->nome) || (l1->numMat != l2->numMat)) {
			return 0;
		}
	}
	return l1 == l2;
}

int listaProfundidade(Lista *l, int mat) {
	int cont = 1;

	for (l = l; l != NULL; l = l->proxima)
		if (l->numMat > mat) {
			cont++;
		}
	return cont;
}

int listaAltura(Lista* l, int mat) {

	int cont = 1;

	for (l = l; l != NULL; l = l->proxima)
		if (l->numMat < mat) {
			cont++;
		}
	return cont;
}

//Fun��o sem recursividade
int contaNos(Lista* l) {
	int cont = 0;

	for (Lista* nova2 = l; nova2 != NULL; nova2 = nova2->proxima) {
		cont++;
	}

	return cont;
}

//Fun��o sem recursividade
int contaNos(Lista* l, int cont) {

	if (l != NULL)
	{
		return contaNos(l = l->proxima, cont += 1);
	
	}

	if (l == NULL)
		return cont;

}

void listaImprimir(Lista* l) {
	Lista* p = l;

	if (p==NULL) {

		cout << "Lista est� vazia" << endl;

	}

	for (p = l; p != NULL; p = p->proxima) {
      
		cout << p->numMat << endl;
		cout << p->nome << endl;
		cout << p->media << endl;

		cout << "\n\n\n" ;
	}
}

Lista* insirirAluno(Lista* l, int mat, string nom, float nota) {

	Lista* p;
	Lista* x = NULL;
	Lista* novo = new Lista;

	novo->numMat = mat;
	novo->nome = nom;
	novo->media = nota;

	p = l;

	while (p != NULL && p->numMat < mat)
	{
		x = p; 
		p = p->proxima;    
	}
	
	novo->numMat = mat;   

	//inseri o valor no fim
	if (x == NULL)
	{
		novo->proxima = l;
		l = novo;    
	}
	//inserir o valor no meio
	else 
	{
		novo->proxima =x->proxima;
		x->proxima = novo;
	}
	return l;

}

bool listaVazia(Lista* l) {
	return (l == NULL);
}

Lista* listaCriar(void) {
	return NULL;
}