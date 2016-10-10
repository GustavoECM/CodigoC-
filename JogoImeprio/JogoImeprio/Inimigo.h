#pragma once

#include <string>
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
	
public:
	void inserirInimigo(int id, string n, int l, int nt);
};

