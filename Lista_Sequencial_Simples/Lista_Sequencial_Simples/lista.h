#pragma once
const int MAX = 10;

class Lista_Sequencial {
private:
	int last;
public:
	int list[MAX];
	Lista_Sequencial();
	bool is_empty();
	bool is_full();
	int get_size();
	int get(int index);
	bool insert(int element);
	bool insert(int element, int pos);
	bool remove();
	bool remove(int index);
	void print();
	void criar_valores(int p_qtde);
	int find(int value);
	bool exist(int value);
	void clear();
};
