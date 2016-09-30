#include "stdafx.h"
#include <iostream>

using namespace std;

typedef struct Lista
{
	int info;
	Lista* proxima;

}Lista;

Lista* separar(Lista* l , int  n);

int main()
{
    return 0;
}

Lista* separar(Lista* l, int n ) {

	Lista *p;
	Lista *q;

	for (p = l; p != NULL; p=p->proxima) {
	
		if (p->info = n) {
			q =  p->proxima;
			p->proxima = NULL;

			return q;
		 }
		return NULL;
	 }


}