#include "stdafx.h"
#include "Player.h"
#include <string.h>
#include <iostream>

using namespace std;

Player::Player()
{

	nome = " ";
	level = 1;
	numeroTropa = 0;
	forcaTropa = 0;
	xpProximoNivel = 100;

}


//Metodos Gets

string Player::getNome() {
	return nome;
}

int Player::getLevel() {
	return level;
}

int Player::getNumeroTropa(){
	return forcaTropa;
}

int Player::getForcaTropa(){
	return forcaTropa;
}

int Player::getXpProximoNivel() {
	return xpProximoNivel;
}

int Player::getxpPlayer() {
	return xpPlayer;
}

//Metodos sets 

void Player::setNome (string n) {
	nome = n ;
}

void Player::setLevel(int l) {
	level = l;
}

void Player::setNumeroTropa(int nt){
    numeroTropa = nt;
}

void Player::setForcaTropa(int ft) {
	forcaTropa = ft;
}

void Player::setXpProximoNivel(int xp) {

	xpProximoNivel = xp;
}

void Player::setxpPlayer(int xp){

	xpPlayer = xp;
}

//Metodos Player

void Player::upPlayer() {

	if (xpPlayer > xpProximoNivel) {
		level++;
	}

}

void Player::upXpProximoNivel(){
	xpProximoNivel = 100 * level;
}