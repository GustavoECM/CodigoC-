#include "stdafx.h"
#include "lista.h"
#include <iostream>
#include <time.h>

using namespace std;

Lista_Sequencial::Lista_Sequencial() {
	srand((unsigned)time(NULL));

	for (int i = 0; i < MAX; i++) {
		list[i] = NULL;
	}
	last = -1;
}

bool Lista_Sequencial::is_empty() {
	return last == -1;
}

bool Lista_Sequencial::is_full() {
	return last == MAX;
}

int Lista_Sequencial::get_size() {
	return last + 1;
}

int Lista_Sequencial::get(int index) {
	if (is_empty()) {
		cout << "Erro: Lista Vazia.";
		return -1;
	}
	if (index < 0 || index > last) {
		cout << "Erro: Indice invalido";
		return -1;
	}
	return list[index];
}

bool Lista_Sequencial::insert(int element) {
	if (is_full())
		return false;

	last++;
	list[last] = element;
	return true;
}

bool Lista_Sequencial::insert(int element, int pos) {
	if (is_full() || pos < 0 || pos > last + 1)
		return false;

	for (int i = last + 1; i > pos; i--) {
		list[i] = list[i - 1];
	}
	last++;
	list[pos] = element;
	return true;
}

void Lista_Sequencial::print() {
	for (int i = 0; i < get_size(); i++) {
		cout << list[i] << "      ";
	}
	cout << "\n";
}

bool Lista_Sequencial::remove() {
	if (is_empty())
		return false;

	list[last] = NULL;
	last--;
	return true;
}


bool Lista_Sequencial::remove(int index) {
	if (is_empty())
		return false;
	if (index < 0 || index > last)
		return false;
	if (index == get_size()) {
		list[index] = NULL;
		last--;
		return true;
	}

	for (int i = index; i < get_size(); i++) {
		if (i == get_size() - 1) {
			list[get_size() - 1] = NULL;
		}
		else {
			list[i] = list[i + 1];
		}
	}

	last--;
	return true;

}

void Lista_Sequencial::criar_valores(int p_qtde) {
	for (int i = 0; i < p_qtde; i++) {
		insert(1 + (rand() % 100));
	}
}

void Lista_Sequencial::clear() {
	for (int i = 0; i < get_size(); i++)
		list[i] = NULL;

	last = -1;
}

bool Lista_Sequencial::exist(int value) {
	for (int i = 0; i < get_size(); i++) {
		if (list[i] == value) {
			return true;
		}
	}

	return false;
}

int Lista_Sequencial::find(int value) {
	for (int i = 0; i < get_size(); i++) {
		if (list[i] == value) {
			return i;
		}
	}

	return -1;
}