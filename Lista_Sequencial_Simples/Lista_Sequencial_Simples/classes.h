#pragma once
#include "lista.h"

class Classe {

 public:
	bool is_ordered(int p_l[], int tam);

	void copy_list(Lista_Sequencial &l1, Lista_Sequencial &l2);

	void copy_list_del_dup(Lista_Sequencial &l1, Lista_Sequencial &l2);

	void copy_list_invert(Lista_Sequencial &l1, Lista_Sequencial &l2);

	void copy_list_invert(Lista_Sequencial &l);

	void copy_alternate(Lista_Sequencial &l1, Lista_Sequencial &l2, Lista_Sequencial &l3);

	void del_value(Lista_Sequencial &l, int value);
};


