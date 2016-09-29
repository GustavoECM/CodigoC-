#pragma once

#include <string.h>
#include <iostream>

using namespace std;

struct inimigo
{
	
	int id;
	string nome;
	int level;
	int numeroTropa;
	int forcaTropa;

};


class Inimigo
{
private:
	inimigo ini;

public:
	inimigo getLevel();
	inimigo getNome();
	inimigo getNumTropa();
	inimigo getForcaTropa();

	inimigo setLevel(int l);
	inimigo setNome(string n);
	inimigo setNumTropa(int nt);
	inimigo setForcaTropa(int ft);

};

