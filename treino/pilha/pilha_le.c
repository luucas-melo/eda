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
typedef struct pilha {
	item dado;
	struct pilha *prox;
	
} pilha;

pilha topo;

pilha *inicializa () { 
	pilha *novo; 
	novo = malloc (sizeof (pilha));
	novo->prox = NULL;
	return novo;
}

void empilha (pilha *p, item x) {
	pilha *novo;
	novo = malloc (sizeof(pilha));
	novo->dado = x;
	novo->prox = p->prox;
	p->prox = novo;
}

item desempilha (pilha *p) {
	pilha *lixo = p->prox;
	p->prox = lixo->prox;
	item dado = lixo->dado;
	free(lixo);
	return dado;
}

void destroi (pilha *p) {
	while(p->prox != NULL)
		desempilha(p);
	free(p);
}

void imprime(pilha *p) {
	printf("___\n");
	while(p->prox != NULL) {
		printf("|"spec "|""\n", p->prox->dado);
		printf("___\n");
		p = p->prox;
	}	
	
}

int main () {
	pilha *p = inicializa();
	empilha (p, 1);
	empilha (p, 2);
	empilha (p, 3);
	empilha (p, 4);
	empilha (p, 5);
	desempilha(p);
	imprime(p);	
}



