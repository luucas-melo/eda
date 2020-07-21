#include <stdio.h>
#include <stdlib.h>
typedef struct pilha {
  int *dados;
  int N, topo;
} pilha;
/*
void inicializa (pilha *p) {
	p->N = 10;
	p->dados = malloc (p->N * sizeof(int));
	if(p->dados == NULL)
		exit(EXIT_FAILURE);
	p->topo = 0;

}
*/
int empilha (pilha *p, int x) {
	
	if(p->topo == p->N) {
		p->dados = realloc (p->dados, 2 * p->N * sizeof(int));
		if (p->dados	 == NULL)
			return 0;
		p->N*=2;
	}
	p->dados[p->topo] = x;
	p->topo++;
	return 1;
}
/*
void imprime (pilha *p) {
int x = 0;
	for(x = 0;x != p->topo; x++)
		printf("%d",p->dados[x]);
}

int main () {
	pilha *p = malloc(sizeof(pilha));
	inicializa(p);
	empilha(p,1);
	empilha(p,2);
	empilha(p,3);
	imprime(p);
	return 0;
}

*/
