#include "stdafx.h"
#include <iostream>

using namespace std;

typedef struct Lista
{
	int info;
	Lista* proxima;

}Lista;


Lista* inserir(Lista* l, int n);
Lista* separar(Lista* l , int  n);
Lista* junta(Lista* l, Lista* m);

int main()
{
	
	return 0;
}

Lista* inserir(Lista* l, int n) {

	Lista* p;   //Lista usada para percorrer a lista.
	Lista* a = NULL; // lista usada para armazenar o valor anteriro de p
	Lista* nova = new Lista;  //lista para setar o novo no em sua posição.

	nova->info = n; // valor da informção recebe o valor que esta sendo passado pelo usuario.

    //While que percorre enquanto a lista p for diferente de NULO  é enquanto a informação contida dentro do no menor que a informação do usuario.
	while (p != NULL  && p->info < n)
	{
		a = p; //anterir recebe o atual de p 
		p = p->proxima;  //p recebe seu proximo nó.
	}

	//se A lista L for uma lista vazia retorna p que sera o primeiro valor da Lista. 
	if (l==NULL) {
		nova->proxima = l;  // nova recebe o a lista  de  [ L ]or NULA.
		l = nova;   // l recebe o novo valor da nova lista
		return p;  //retorna p como a lista.
	}
	else {

		nova = a->proxima; // a lista [ nova ]  recebe o ponteiro do proximo valor de [ A ] que e a anterior que sera o proximo valor de P
		a->proxima = nova; // a lista [ A ]   que é a anterior recebe  o ponteiro do novo valor...
	}
	return l;
}

Lista* separar(Lista* l, int n ) {

	Lista *p;
	Lista *q;

	for (p = l; p != NULL; p=p->proxima) {
	
		if (p->info = n) {
			q =  p->proxima;
			p->proxima = NULL;

			return q;
		 }
		return NULL;
	 }


}

Lista* junta(Lista* l, Lista* m) {

	
	Lista* p;
  for (p = l; p != NULL; p=p->proxima) {
		if (p->proxima == NULL) {
			p->proxima = m;
			return p;
		}
	}

}