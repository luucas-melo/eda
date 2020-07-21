#include <stdio.h>
#include <stdlib.h>
typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void insere_inicio (celula *le, int x) {
	celula *nova;
	nova = malloc(sizeof (celula));
	nova->dado = x;
	nova->prox = le->prox;
	le->prox = nova;

}

void insere_antes (celula *le, int x, int y) {
	celula *a, *b, *nova;
	nova = malloc (sizeof (celula));	
	nova->dado = x;
	a = le;
	b = le->prox;
	
	while (b!=NULL && b->dado!= y) {
		a = b;
		b = b->prox;
	}
	nova->prox = b;
	a->prox = nova;
}


