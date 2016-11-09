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


char cart[MAX] = { '(','(',')','(',')',')'}; //usado no exr_1 para verica��o de parentese.

char letras[MAX] = { 'A','B','A','A','B','B' }; //usado no exr_2 para verica��o de de xMy.

/* 1) Escreva um programa para verificar se uma express�o matem�tica  tem os par�nteses agrupados de forma correta, isto e :

(1) se o n�mero de par�nteses � esquerda e � direita s�o iguaias e :
(2) se todo par�ntese aberto � seguido por um fechamento de par�ntese.

Exemplo : Ex1 : As express�es((C + R) ou C + R(violam a condi��o 1
	Ex2: As express�es) Y + x(-E ou(x + y)) - (x + f  violam a condi��o 2*/
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