#include <stdio.h>
#include <stdlib.h>

typedef struct pilha { 
	char pe;
	struct pilha *prox;
}pilha;
pilha *inicializa() {
	pilha *p = malloc (sizeof (pilha));
	if(p == NULL)
		exit (EXIT_FAILURE);	
	p->prox = NULL;
}
void empilha (pilha *p, char x) {
	pilha *novo = malloc (sizeof (pilha));
	novo->pe = x;
	novo->prox = p->prox;
	p->prox = novo;
}

char desempilha(pilha *p){
	pilha *lixo = p->prox;
	p->prox = lixo->prox;
	char dado = lixo->pe;
	free(lixo);
	return dado;
}

int main () {
	pilha *botas[31];
	int i;
	int num;
	int pares = 0;
	char lado;
	for(i = 0;i < 31;i++){
		botas[i] = malloc (sizeof(pilha));
		botas[i]->prox = NULL;
	}
	while (scanf("%d %c", &num, &lado) != EOF){
    if (botas[num-30]->prox == NULL || botas[num-30]->prox->pe == lado){
      empilha(botas[num-30], lado);
    }
    else{
      desempilha(botas[num-30]);
      pares++;
    }
     
  }
	printf("%d\n", pares);
	return 0;
}
