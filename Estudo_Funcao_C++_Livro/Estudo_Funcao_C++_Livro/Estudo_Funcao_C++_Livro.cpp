#include "stdafx.h" // visual estudio componente
#include<iostream>
#include "FuncaoMatematica.h"
using namespace std;


int quadrado(int );

int main()
{
	FuncaoMatematica x;// objeto da classe FuncaoMatematica
	x.exemplosFuncao();

	cout << "===============================" << endl;

	for (int i = 2; i < 6; i++) //for para percorre o valor ate 6
		cout << quadrado(i) << "  "; // print do retorno da função quadrado

	cin.get();
	cin.get();
	return 0;
}

int quadrado(int y) {
   
	return y*y;
}
