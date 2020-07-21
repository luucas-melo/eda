#include <stdio.h>
#include <stdlib.h>
typedef struct fila{
	int dado;
	struct fila *prox;
}fila;
fila *inicializa() {
	fila *novo = malloc(sizeof (fila));
	if (novo != NULL) {
		novo->prox = novo;
	}

}
fila *enfileira(fila *f, int x) {
	fila * novo = malloc (sizeof (fila));
	if (novo != NULL) {
		novo->prox = f->prox;
		f->prox = novo;
		f->dado = x;
	}
	return novo;
}

int desenfileira (fila *f){
	if (f->prox == f)
		exit (EXIT_FAILURE);
	fila *lixo;
	lixo = f->prox;
	f->prox = lixo->prox;
	int dado = lixo->dado;
	free(lixo);
	return dado;
}
void imprime(fila *f){
	fila *p;
	for(p = f->prox; p != f; p = p->prox){
		printf("%d ", p->dado);
	}
}	

int main () {
	fila *f;
	int n, i;
	f = inicializa();
	scanf ("%d", &n);
	for(i = 0; i < n;i++){
		f = enfileira(f, i);
	}

	fila *p = f->prox;
	
	while (f != p->prox) {
		desenfileira(f)
		f = enfileira(f, desenfileira(f));
		
	}
	imprime (f);
	return 0;
}
