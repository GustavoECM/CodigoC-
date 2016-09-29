// Lista_Sequencial_Simples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "classes.h"

using namespace std;

int main()
{

	Classe c;
	Lista_Sequencial l;

	l.criar_valores(6);
   
	cout << l.get_size();
    
   cin.get();

	return 0;
}

