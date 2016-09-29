#include <stdio.h>
#include <iostream>
using namespace std;

struct Lista{
    int val;
    struct Lista* prox;
};

Lista* lst_criar(void){
    return NULL;
}

Lista* lst_inserir(Lista* l, int i){
    Lista* novo = new Lista;
    
    novo->val = i;
    novo->prox = l;
    
    return novo;
}

void lst_imprimir(Lista* l){
    Lista* p;
    
    for(p = l; p != NULL; p = p->prox){
        cout << p->val << endl;
    }
}

//Daqui pra baixo o cód ficou phoda!!!
Lista* separa(Lista* l, int n){
    Lista* p;
    Lista* lst2;
    
    p = l;
    
    while( p != NULL ){
        
        if (p->val == n) {
            lst2 = p->prox;
            p->prox = NULL;
        }
        
        p = p->prox;
    }
    
    return lst2;
}

Lista* concatena(Lista* l1, Lista* l2 ){
    Lista* p;
    Lista* l3;
    
    if(l1 == NULL) return l2;
    
    p=l1;
    
    do{
        
        l3 = p;
        p = p->prox;
        
    } while( p != NULL );
    
    l3->prox = l2;
    
    return l1;
}

int main(int argc, char **argv)
{
	Lista* l;
    Lista* l2;
    Lista* l3;
    
    l = lst_criar();
    l = lst_inserir(l, 2);
    l = lst_inserir(l, 3);
    l = lst_inserir(l, 5);
    l = lst_inserir(l, 9);
    l = lst_inserir(l, 1);
    
    //l2 = separa(l, 5);
    l2 = lst_criar();
    l2 = lst_inserir(l2, 51);
    l2 = lst_inserir(l2, 90);
    l2 = lst_inserir(l2, 10);
    
    lst_imprimir(l);
    cout << "===\n";
    lst_imprimir(l2);
    
    l3 = concatena(l, l2);
    cout << "===\n";
    lst_imprimir(l3);
    
    
	return 0;
}
