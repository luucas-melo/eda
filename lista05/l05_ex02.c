#include <stdio.h>
#include <stdlib.h>
typedef struct pilha {
  int *dados;
  int N, topo;
} pilha;

int desempilha (pilha *p, int *y){
	if (p->topo == 0)
		return 0;
	else{
	p->topo--;
	*y = p->dados[p->topo];
	return 1;
	}
}

/*
void inicializa (pilha *p) {
	p->N = 10;
	p->dados = malloc (p->N * sizeof(int));
	if(p->dados == NULL)
		exit(EXIT_FAILURE);
	p->topo = 0;

}

void imprime (pilha *p) {
	int x = 0;
	while(x != p->topo) {
		printf("%d ",p->dados[x]);
		x++;
	}	
}
void empilha (pilha *p, int x) {
	
	if(p->topo == p->N) {
		p->dados = realloc (p->dados, 2 * p->N * sizeof(int));
		if (p->dados	 == NULL)
			exit(EXIT_FAILURE);
		p->N*=2;
	}
	p->dados[p->topo] = x;
	p->topo++;
}

int main () {
	int y;
	pilha *p;
	inicializa(p);
	empilha(p,2);
	desempilha(p,&y);
	printf("%d",y);

	return 0;
}
*/
