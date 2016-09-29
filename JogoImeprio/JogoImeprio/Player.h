#pragma once

#include <iostream>
#include <string.h>
using namespace std;

class Player
{
private : 
	string nome;
	int level;
	int numeroTropa;
	int forcaTropa;
	int xpPlayer;
	int xpProximoNivel;
public:
	Player();

	string getNome();
	int getLevel();
	int getNumeroTropa();
	int getForcaTropa();
	int getXpProximoNivel();
	int getxpPlayer();

	void setNome(string n);
	void setLevel(int l);
	void setNumeroTropa(int nt);
	void setForcaTropa(int ft);
	void setXpProximoNivel(int xp);
	void setxpPlayer(int xp);

	void upPlayer();
	void upXpProximoNivel();
};

