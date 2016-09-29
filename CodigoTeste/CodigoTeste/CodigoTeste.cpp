// CodigoTeste.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int sizeM = 4;

void fillMatriz();

void searchMatriz();

int mat[sizeM][sizeM];


int main()
{

	fillMatriz();
	for (int i = 0; i < sizeM; i++) {
		for (int j = 0; j < sizeM; j++) {

			cout << mat[i][j] << "  ";

		}
		cout << endl;
	}
	cout << "\n\n";
	searchMatriz();
	for (int i = 0; i < sizeM; i++) {
		for (int j = 0; j < sizeM; j++) {

			cout << mat[i][j] << "  ";

		}
		cout << endl;
	}
	cin.get();
	cin.get();
    return 0;
}


void searchMatriz() {

	for (int k = 1; k < sizeM; k++) {
		for (int i = 1; i < sizeM; i++) {
			for (int j = 1; j < sizeM;j++) {
				if ((mat[i][k]+mat[k][j] )< mat[i][j]) {
					mat[i][j] = mat[i][k] + mat[k][j];
				}
			 }
	
		}


	}


}

void fillMatriz() {

	for (int i= 0; i < sizeM; i++) {
		for (int j = 0; j < sizeM; j++) {

			mat[i][j] = 1 + rand() % 10;

		}
	}

}
