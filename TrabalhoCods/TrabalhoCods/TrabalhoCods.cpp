#include "stdafx.h"
#include <iostream>



using namespace std;

int BuscaBinaria(int vet[], int chave, int Tam);

int main() {


	int vet[6] = { 10,20,30,40,50,60 };

	cout << "Indice do valor pesquisado e  : " <<  BuscaBinaria(vet, 50, 6); 
	
	cin.get();
	cin.get();

	return 0;
}
 
int BuscaBinaria(int vet[], int chave, int Tam) {


	int inf = 0;        //Limite inferior  (o primeiro elemento do vetor em C é zero          )
	int sup = Tam - 1; //Limite superior  (termina em um número a menos 0 a 9 são 10 numeros )
	int meio;         //Variavel recebe o meio do array.

					  //Neste While fazemos um loop que 

	while (inf <= sup)
	{
		meio = (inf + sup) / 2;  // Aqui a varivel do meio recebe o tamanho do vetor 
								 //e seu menor tamanho.

								 //Faz comparação central do vertor se for o valor procurado(chave) ele retorna a posição do numero.
		if (chave == vet[meio]) {
			return meio;
		}

		else if (chave < vet[meio]) //comparação de a chave e menor que o valor no meio
			sup = meio - 1;  // se a chave e menor o valor sup recebe o meio -1.
		else
			inf = meio + 1;  //se a chave for maior que o valor no meio
							 //o inferior recebe meio mais + 1. 


	}


	cout << "Nao encontrado..." << endl; // exibi se o valor nao for encontradi

	return -1;   // não encontrado


}