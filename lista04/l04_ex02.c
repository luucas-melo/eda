#include <stdio.h>
#include <stdlib.h>
typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

celula *busca (celula *le, int x){
	celula *p;
	p = le;
	while(p != NULL && p->dado !=x)
		p = p->prox;
	return p;
}

celula *busca_rec (celula *le, int x) {
	if(le == NULL)
		return NULL;
	else if (le->dado == x)
		return le;
	return busca_rec(le->prox, x);
}


