#include "stdafx.h"  //comentar se nao usar Visual Studio include referente a ele.

#include <iostream>

using namespace std;

void  order(int *a, int t);
void  fill(int *a, int t);
void  print(int *a, int t);
void  searchSequence(int *a, int t);

int main()
{

	int tam;
	int *values;
	cout << "Por favor informe o tamanho de sua Lista : ";
	cin >>  tam;

	values = (int *)malloc(sizeof(int) * tam);
	

	fill(values,tam);

	print(values, tam);
	
	order(values,tam);
	
	print(values, tam);

	searchSequence(values, tam);

	cin.get();
	cin.get();
    return 0;
}


//função para ordenar o vetor para
void order(int *a, int t) 
{

	int aux;

	for (int i = 0; i <t; i++) 
	{
		for(int j=0; j<t; j++)
		  
		if (*(a+i) < *(a+j)) 
		{
			aux = *(a+i);
			 *(a+i) = *(a +j);
			*(a + j) = aux;
		}

	}


}  

//funcão para prencher o vetor.
void fill(int *a, int t) 
{
	 
	for (int i = 0; i < t; i++) 
	{
		*(a+i) = 1 + rand() % 3;
	}
  
}

//função para imprimir o vetor
void print(int *a, int t) 
{
	for (int i = 0; i < t; i++) 
	{

		cout << *(a+i) << "  ";

	}
	cout << "\n\n\n";
}

//função para achar a sequencia maior.
void searchSequence(int *a, int t) 
{

	int n = 0;
	int n2 = 0;

	int cont1 = 0;
	int cont2 = 0;

	for (int i = 0; i < t; i++)
	{
		if (i == 0) 
		{
			n++;
			n2++;
		}

		if ((i + 1) < t)
		{
			if (*(a + (i + 1)) - *(a + i) == 1)
			{

				n++;
				n2++;
			}else
			{
				
					
			if (cont1 < n) 
				{
					cont1 = n;
				}
				n = 0;
			}
		}
		
		if ((i + 1) < t)
		{
			if (*(a + (i + 1)) - *(a + i) == 0)
			{
				if (*(a + (i - 1)) != *(a + i)) {
					n2++;
				}
			}
			else
			{
				if (cont2 < n2)
				{
					cont2 = n2;
				}
				n2 = 0;
			}
		}
	}

	cout << "Maior Sequencia sem repeticao de valores : " << cont1 <<  endl;
	cout << "Maior Sequencia com repeticao de valores : " << cont2 << endl;

}