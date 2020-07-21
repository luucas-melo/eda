#include <stdio.h>
#include <stdlib.h>
typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void imprime (celula *le) {
	celula *p;
	for(p = le->prox;p != NULL; p = p->prox)
		printf("%d -> ",p->dado);
	if(p == NULL)
		printf("NULL\n");
}

void imprime_rec (celula *le) {
	if(le->prox != NULL){
		printf("%d -> ",le->prox->dado);
		imprime_rec(le->prox);
	}
	if(le->prox == NULL)
		printf("NULL\n");	

}
/*
void insere(celula *le, int x) {
	celula *novo;
	novo = malloc (sizeof (celula));
	novo->dado = x;
	novo->prox = le->prox;
	le->prox = novo;
}

celula *inicializa () {
	celula *novo = malloc (sizeof (celula));
	novo->prox = NULL;
	return novo;
}



int main () {
	celula *p;
	p = malloc (sizeof (celula));
	p = inicializa();
	insere(p,1);
	insere(p,2);
	insere(p,3);
	insere(p,4);
	imprime_rec(p);
	return 0;
}
*/
