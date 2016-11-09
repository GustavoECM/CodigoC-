#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
 
const  int MAX = 6;

typedef struct pilha {

	int total=0 ;
	char vet[MAX];

}Pilha;

typedef struct fila {

	int total;
	char vet[10];
	int primeiro;

}Fila;


char cart[MAX] = { '(','(',')','(',')',')'}; //usado no exr_1 para vericação de parentese.

char letras[MAX] = { 'A','B','A','A','B','B' }; //usado no exr_2 para vericação de de xMy.

/* 1) Escreva um programa para verificar se uma expressão matemática  tem os parênteses agrupados de forma correta, isto e :

(1) se o número de parênteses à esquerda e à direita são iguaias e :
(2) se todo parêntese aberto é seguido por um fechamento de parêntese.

Exemplo : Ex1 : As expressões((C + R) ou C + R(violam a condição 1
	Ex2: As expressões) Y + x(-E ou(x + y)) - (x + f  violam a condição 2*/
bool exr_01(Pilha*v, char n[MAX]);

bool exer_02(Pilha*v, char n[MAX]);

char exer_03(char letra);

int main()
{

	Pilha *a = new Pilha;
	Pilha *b = new Pilha;

	cout << exr_01(a, cart);
	cout << exer_02(b, letras);
	cin.get();
    cin.get();

	return 0;
}

bool exr_01(Pilha*v, char n[MAX])  {
              
			for (int i = 0; i < MAX; i++)
			{
	  
				if (n[i] == '(') 
				{
					if (v->total == MAX) 
					{
						cout << "Estorou memoria";
					}
					else
					{
						v->total++;
					}
				}
				if ( n[i] == ')') 
				{     
					if (v->total != 0) 
					{
						v->total--;		          				      
					} else{
						return false;
					}
				}
				
			}
            
			if (v->total == 0)
			{
				return true;
			}

			return false;
}

bool exer_02(Pilha*v, char n[MAX]){

	for (int i = 0; i < MAX; i++)
	{ 
		if (v->total == MAX) {
			cout << "Estorou memoria";
		}
		else
		{
			v->vet[v->total] = n[i];
			v->total++;		
		}
	}

  for (int i = 0; i < v->total - 1; i++)
	{
		if (v->vet[v->total-1] == v->vet[i] ) 
			{
					v->total--;
			}
			else 
			{
				return false;
			}
	   }		 
	
	return true;
}

char exer_03( char letra) {

	Fila*a = new Fila;
	Fila*b = new Fila;

	//inserir 

}