#include <stdio.h>
#include <stdlib.h>
typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

celula * inicializa(){
	celula *novo = malloc(sizeof (celula));
	if (novo != NULL)
		novo->prox = novo;
	return novo;
}
celula *enfileira (celula *f, int x) {
	celula * novo = malloc (sizeof (celula));
	if (novo != NULL) {
		novo->prox = f->prox;
		f->prox = novo;
		f->dado = x;
	}
	return novo;
}

int desenfileira (celula *f, int *y){
	if (f->prox == f)
		return 0;
	celula *lixo;
	lixo = f->prox;
	f->prox = lixo->prox;
	*y = lixo->dado;
	free(lixo);
	return 1;
}
void imprime(celula *f){
	celula *p;
	for(p = f->prox; p != f; p = p->prox){
		printf("%d", p->dado);
	}
}	

void destroi (celula *f){
	int dum;
	while (desenfileira(f, &dum));
	free(f);
}
int main () {
	int aux;
	celula *f = inicializa();
	f = enfileira(f, 1);
	f = enfileira(f, 2);
	f = enfileira(f, 3);
	desenfileira(f, &aux);
	imprime(f);
	return 0;
}
