#include <stdio.h>
#include <stdlib.h>
typedef struct pilha{
	char *dados;
	int topo;
	int N;
}pilha;
void inicializa (pilha *p, int x) {
	p->N = x;
	p->dados = malloc (p->N * sizeof(char));
	if(p->dados == NULL)
		exit(EXIT_FAILURE);
	p->topo = 0;
}
void empilha(pilha *p, char c) {
	p->dados[p->topo] = c;
	p->topo++;
}
char desempilha(pilha *p){
	p->topo--;
	return p->dados[p->topo];
}

void imprime (pilha *p) {
	int x = 0;
	while(x != p->topo) {
		printf("%c ",p->dados[x]);
		x++;
	}
}
int palindromo(int x, int p) {
	if(x == p)
		return 1;
	return 0;
}
int main() {
	pilha p,q;
	int i = 0;
	int x, j;
	int k = 0;
	char *string;
	int cont = 0;
	scanf("%d", &x);
	inicializa(&p, x);
	inicializa(&q, x);
	string = malloc(x * sizeof(char));
	scanf("%s", string);
	for (i = 0;i < x; i++) {
		empilha(&p, string[i]);
	}
	for (i = 0;i < x; i++) {
		empilha(&q, desempilha(&p));
	}
	
	while(string[k] == q.dados[k] && k < q.topo){
		k++;
	}
	printf("%d\n",palindromo(k,x));
	free(string);
	return 0;
}
