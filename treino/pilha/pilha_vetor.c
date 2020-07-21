#include <stdio.h>
#include <stdlib.h>
typedef 	struct pilha {
	int *dado;
	int topo;
	int N;
	
}pilha;

void inicializa (pilha *p) {
	p->N = 10;
	p->dado = malloc (p->N * sizeof(int));
	if(p->dado == NULL)
		exit(EXIT_FAILURE);
	p->topo = 0;

}

void empilha (pilha *p, int x) {
	
	if(p->topo == p->N) {
		p->dado = realloc (p->dado, 2 * p->N * sizeof(int));
		if (p->dado	 == NULL)
			exit(EXIT_FAILURE);
		p->N*=2;
	}
	p->dado[p->topo] = x;
	p->topo++;
}

int desempilha (pilha *p) {
	p->topo--;
	return p->dado[p->topo];

}

void imprime (pilha *p) {
	int x = 0;
	while(x != p->topo) {
		printf("%d ",p->dado[x]);
		x++;
	}
	
}
int main () {
	pilha c, k;
	//c = malloc(10*sizeof(int));
	inicializa (&c);
	empilha (&c, 1);
	empilha (&c, 2);
	empilha (&c, 3);
	empilha (&c, 4);
	//desempilha(&c);	
	imprime (&c);
}
