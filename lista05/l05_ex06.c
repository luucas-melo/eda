#include <stdlib.h>

typedef struct fila {
  int *dados;
  int N, p, u;
} fila;
/*
int enfileira (fila *f, int x){
	if(f->u == f->N){
		f->N*=2;
		f->dados = realloc(f->dados, f->N*sizeof(int));
		if (f->dados == NULL)
			return 0;
	}
	f->dados[f->u] = x;
	f->u++;
	return 1;
}
*/
int desenfileira (fila *f, int *y) {
	if(f->u == f->p)
		return 0;
	*y = f	->dados[f->p];
	f->p++;	
	return 1;
}
/*
void imprime (fila *f) {
	int x;
	for(x = 0; x < f->u; x++){
		printf("%d",f->dados[x]);
	}

}

void inicializa (fila *f) {
	f->N = 10;
	f->dados = malloc(f->N * sizeof (int));
	if (f->dados == NULL)
		exit (EXIT_FAILURE);
	f->p = f->u = 0;
}

int main () {	
	fila *f = malloc(sizeof(fila));
	inicializa(f);
	enfileira(f,5);
	enfileira(f,4);
	imprime(f);
	return 0;
}
*/
