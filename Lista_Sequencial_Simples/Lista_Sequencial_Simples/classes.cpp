#include "stdafx.h"
#include "classes.h"
#include <iostream>

bool Classe::is_ordered(int *p_l, int tam) {
	for (int i = 0; i < tam - 1; i++) {
		if (*(p_l + i) > *(p_l + (i + 1)))
			return false;
	}
	return true;
}

void Classe::copy_list(Lista_Sequencial &l1, Lista_Sequencial &l2) {
	for (int i = 0; i < l2.get_size(); i++)
		l2.remove();
	for (int i = 0; i < l1.get_size(); i++)
		l2.insert(l1.get(i));
}

void Classe::copy_list_del_dup(Lista_Sequencial &l1, Lista_Sequencial &l2) {
	l2.clear();
	for (int i = 0; i < l1.get_size(); i++) {
		if (!l2.exist(l1.get(i))) {
			l2.insert(l1.get(i));
		}
	}
}

void Classe::copy_list_invert(Lista_Sequencial &l1, Lista_Sequencial &l2) {
	l2.clear();
	for (int i = l1.get_size() - 1; i >= 0; i--) {
		l2.insert(l1.get(i));
	}
}

void Classe::copy_list_invert(Lista_Sequencial &l) {
	Lista_Sequencial aux;

	copy_list_invert(l, aux);
	copy_list(aux, l);
}

void Classe::copy_alternate(Lista_Sequencial &l1, Lista_Sequencial &l2, Lista_Sequencial &l3) {

	l3.clear();

	if (l1.get_size() > l2.get_size()) {
		for (int i = 0; i < l1.get_size(); i++) {
			l3.insert(l1.get(i));
			if (i <= l2.get_size() - 1) {
				l3.insert(l2.get(i));
			}
		}
	}
	else {
		for (int i = 0; i < l2.get_size(); i++) {
			if (i <= l1.get_size() - 1) {
				l3.insert(l1.get(i));
			}
			l3.insert(l2.get(i));
		}
	}

}

void Classe::del_value(Lista_Sequencial &l, int value) {

	while (l.exist(value)) {
		int pos = l.find(value);
		l.remove(pos);
	}

}
