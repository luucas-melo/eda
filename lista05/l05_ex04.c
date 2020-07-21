#include <stdlib.h>
#include <stdio.h>
typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

int desempilha (celula *p, int *y) {
	if (p->prox == NULL)
		return 0;
	celula *lixo = p->prox;
	p->prox = lixo->prox;
	*y = lixo->dado;
	free(lixo);
	return 1;
}
/*
celula *inicializa () { 
	celula *novo; 
	novo = malloc (sizeof (celula));
	novo->prox = NULL;
	return novo;
}	
void empilha (celula *p, int x) {
	celula *novo;
	novo = malloc (sizeof(celula));
	novo->dado = x;
	novo->prox = p->prox;
	p->prox = novo;
}

int main () {
	int d;
	celula *p = inicializa();
	empilha(p,3);
	empilha(p,4);
	desempilha(p,&d);
	printf ("%d", d);
	return 0;
}
*/
