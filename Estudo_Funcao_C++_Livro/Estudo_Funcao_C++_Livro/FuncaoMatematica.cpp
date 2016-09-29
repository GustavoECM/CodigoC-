#include "stdafx.h"
#include "FuncaoMatematica.h"
#include<iostream>

using namespace std;

FuncaoMatematica::FuncaoMatematica()
{
}

void FuncaoMatematica::exemplosFuncao() {
   
	int x = 9.2 , y = 8;
	
	cout << ceil(x)<< endl; //arrendonda x para o menor inteiro não menor que x 
	
	cout << cos<int>(x) << endl; //co_seno trigonometrico de x (x em radianos)

	cout << exp(x) << endl; //funcao exponencial E²

	cout << fabs(x) << endl; //valor absoluto de x

	cout << floor(x) << endl; //arredonda x para o maior inteiro nao maior que x

    cout << fmod(x, y) << endl;  //resto de x/y como numéro de ponto flutuante

	cout << log(x) << endl; //logaritmo de x (base e)

	cout << log10(x) << endl; //logaritmo de x (base 10)

	cout << pow(x, y) << endl; // x elevado á potencia de y;

	cout << sin(x) << endl; //seno trigonametrico de x (x em radianos)
   
	cout << sqrt(y) << endl;//raiz quadeada de y

	cout << tan<int>(x) << endl; // tangente trigonometrico de x (x radiano)

}