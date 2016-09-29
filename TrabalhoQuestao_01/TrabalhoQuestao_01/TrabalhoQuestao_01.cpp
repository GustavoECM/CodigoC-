#include "stdafx.h"
#include <iostream>

using namespace std;

int const sizeM = 4;

int mat[sizeM][sizeM];  //matriz primaria com as rotas

bool correctWay[sizeM][sizeM]; //matriz de marca o melhor caminho

//Declaração das função.
void fillMatrix();
void searchWay3();
void print();

//funções de tentativas.
void searchWay();
void searchWay2();

int main()
{

	fillMatrix();

	searchWay3();
	
	print();

	cin.get();
	cin.get();

    return 0;
}

//função usada para preencher as matrizes.
void  fillMatrix()
{
	for (int row = 0; row < sizeM; row++) 
	{
		for (int col = 0; col < sizeM; col++)
		{
		    correctWay[row][col] = false;
			 mat[row][col] = 1 + rand() % 12;

		}
	}
	}

//Função que de procurar.
void searchWay3() {

	int rowActual =0, colActual =0;
	int  somaCaminho1 =0;
	int somaCaminho2 = 0;

	//setas o valoes incial e e final verdadeiro. Pois eles serao sempre percorrido.
	correctWay[0][0] = true; 
	correctWay[3][3] = true;
	

	//while para rodar as comparações e soma ate chegar a ponto final da matriz;
	while (rowActual < sizeM && colActual<sizeM  )
	{
	
		
		//soma as linha depois coluna matriz.
		for (int row2=rowActual; row2<sizeM; row2++)
		{
			for (int col2 =colActual; col2<sizeM; col2++)
			{
			
				if (col2==sizeM)
				{
					row2++;
					
				}
				else {
					somaCaminho1 += mat[row2][col2];
				}
				somaCaminho1 += mat[row2][col2];
		   }

		 }
		
		
		//soma a coluna depois a linha matriz.
		for (int row2 = colActual; row2<sizeM; row2++)
		{
			for (int col2 = rowActual; col2<sizeM; col2++)
			{

				if (col2 == sizeM)
				{
					row2++;
					
				}
				else {
					somaCaminho2 += mat[col2][row2];
				}
				somaCaminho2 += mat[row2][col2];
			}

		}

		// Faz a comparação da soma da matriz e indentifica o melhor caminho e acrecenta uma casa.
		if (somaCaminho1 < somaCaminho2) {

						colActual += 1;
					}
					else {

						rowActual += 1;
					}
			
					//reseta as variaveis do caminho para não dar nenhum erro na nova comparação.
					somaCaminho1 = 0;
					somaCaminho2 = 0;
					correctWay[rowActual][colActual] = true; // seta o caminho verdadeiro numa matriz de bool para poder exibir o caminho menor logo apos.
				
					
					//comparação feitas para nao ultrapassar numeros de linhas e colunas 
					if (rowActual == 0) {
						if (colActual == 3) {
							rowActual++;
							correctWay[rowActual][colActual] = true;
						}

					}

					if (colActual == 3) {
						if (rowActual>0) {
							rowActual++;
							correctWay[rowActual][colActual] = true;
						}
					}
					
					if (colActual == 0) {
						if (rowActual == 3) {
							colActual++;
							correctWay[rowActual][colActual] = true;
						}

					}

					if (rowActual == 3) {
						if (colActual>0) {
							colActual++;
							correctWay[rowActual][colActual] = true;
						}
					}

			

	}

}

//função usada para exibir as matrizes.
void print()
{
	
	int soma =0;
	cout << "\n\n";
	for (int row = 0; row < sizeM; row++)
	{
		for (int col = 0; col < sizeM; col++)
		{
			cout << mat[row][col] << "  ";
		}
		cout << endl;
	}

	cout << "\n\n";
	for (int row = 0; row < sizeM; row++)
	{
		for (int col = 0; col < sizeM; col++)
		{
			if (correctWay[row][col] == true) {
				soma += mat[row][col];
				cout << mat[row][col] << " " ;
				
			}
		}

	}
	cout << "Valor do caminho : " << soma;
}

                         //Funções de Tentaivas.
//=================================================================================================
//função  que nao funcionou mas foi tentativas
void searchWay2() {

	int pos = ((sizeM *sizeM) + sizeM);
	int soma = mat[0][0];
       
	for (int row = 0; row < sizeM; row++) {
		for (int col = 0; col < sizeM; col++) {
			
			if (row +1 != NULL && col +1 != NULL) {
			
				if (mat[row + 1] [col] < mat[row][col+1]) {
					correctWay[row +1][col ] = true;
				}
				else {
					correctWay[row ][col + 1] = true;
				}
			}
			else {
				row = sizeM-1; 
				col = sizeM-1;
			}
		}
	}

		
		cout << "\n\n";
		cout << soma << endl;
}
//função  que nao funcionou mas foi tentativas
void searchWay() 
{

	for (int row = 0; row < sizeM; row++) 
	{
		for (int col = 0; col < sizeM; col++) 
		{
			if (mat[row][col] > mat[col][row]) 
			{
				correctWay[col][row] = true;
			}
			else 
			{
				correctWay[row][col] = true;
			}
		}
	}

 for (int row = 0; row < sizeM; row++)
	{
		for (int col = 0; col < sizeM; col++)
		{
			if (row == col)
			{
				if ((mat[row + 1][col] != NULL) && (mat[row][col +1] != NULL))
				{
					if ((correctWay[row +1 ][col] == true) && (correctWay[row][col +1] == true))
					{

						int vl = mat[row][col] + mat[row + 1][col];
						int vl2 = mat[row][col] + mat[row][col +1];
					
							if (vl < vl2) 
							{
								correctWay[row + 1][ col] = false;
							}
								else
								{
									correctWay[row][col + 1] = false;
								}
					}
				}
			}

			/*if ((correctWay[row + 1][col]==true) && (correctWay[row][col +1]== true)) {
				if (mat[row + 1][col] < mat[row][col +1])
				{
					correctWay[row+1][col ] ==  true;

				}
				else {
					correctWay[row][col +1] == true;
				}
			}*/
		    
		}
	}
	
}
//=================================================================================================


