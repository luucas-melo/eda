#include <stdio.h>
#include <stdlib.h>
#if tipo == 0
	#define item char
	#define spec "%c"
#elif tipo == 1
	#define item int 
	#define spec "%d"
#elif tipo == 2
	#define item double 
	#define spec "%lf"
#endif
typedef struct fila {
	item *dados;
	int p, u, N;
}fila;

void inicializa (fila *f) {
	f->N = 10;
	f->dados = malloc(f->N * sizeof (item));
	if (f->dados == NULL)
		exit (EXIT_FAILURE);
	f->p = f->u = 0;
}
void enfileira (fila *f, item x) {
	if(f->u == f->N){
		f->N*=2;
		f->dados = realloc(f->dados, f->N*sizeof(item));
		if (f->dados == NULL)
			exit(EXIT_FAILURE);
	}
	f->dados[f->u] = x;
	f->u++;
}
item desinfileira (fila *f, item *y) {
	if (f->p == f->u) 
		return 0;
	*y = f->dados[f->p];
	f->p++;
	return 1;
}

void destroi (fila *f) {
	free(f->dados);
}

void imprime (fila *f) {
	int x;
	printf("|");
	for(x = 0; x < f->u; x++){
		printf(spec "| ",f->dados[x]);
	}

}
int main () {
	fila *f = malloc(sizeof(fila));
	inicializa(f);
	enfileira(f, 1);
	enfileira(f, 2);
	enfileira(f, 3);
	enfileira(f, 4);
	enfileira(f, 5);
	imprime(f);
	return 0;
}
