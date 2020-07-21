#include <stdlib.h>
#include <stdio.h>
typedef struct fila {
  int *dados;
  int N, p, u;
} fila;

int enfileira (fila *f, int x){
	int i, j;
	if((f->u+1) % f->N == f->p){
		f->dados = realloc (f->dados, 2 * f->N * sizeof (int));
	if (f->dados == NULL)
		return 0;
	if(f->p > f->u){
		printf("dale");
		if (f->N - f->p > f->u){
			for(i = 0, j = f->N;i < f->u;i++,j++){
		        f->dados[j] = f->dados[i];
		    }	
			f->u += f->N;
		}
		 else {
            for(i=f->N-1,j = 2 * f->N -1;i >= f->p;i--,j--){
                f->dados[j]=f->dados[i];
            }
			f->p+=f->N;
		}
	
	}
	f->N *= 2;
	}
	printf("p %d u %d\n", f->p, f->u);
	f->dados[f->u] = x;
	f->u = (f->u +1) % f->N;
	return 1;
}

/*
void inicializa (fila *f) {
	f->N = 5;
	f->dados = malloc(f->N * sizeof (int));
	if (f->dados == NULL)
		exit (EXIT_FAILURE);
	f->p = f->u = 0;
}
void imprime (fila *f) {
	int x;
	for(x = 0; x < f->N; x++){
		printf("%d ",f->dados[x]);
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
	enfileira(f, 6);
	enfileira(f, 7);
	enfileira(f, 8);
	enfileira(f, 9);
	printf("bo %d\n", f->N);
	imprime(f);
	return 0;
}

*/

