#include <stdio.h>
#include <stdlib.h>
typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void imprime (celula *le) {
	celula *p;
	for(p = le->prox;p != NULL; p = p->prox)
		printf("%d -> ",p->dado);
	if(p == NULL)
		printf("NULL\n");
}


void insere(celula *le, int x) {
	celula *novo;
	novo = malloc (sizeof (celula));
	novo->dado = x;
	novo->prox = le->prox;
	le->prox = novo;
}

celula *inicializa () {
	celula *novo = malloc (sizeof (celula));
	novo->prox = NULL;
	return novo;
}

int remove_depois (celula *p) {
	if (p->prox != NULL) {
	celula *lixo;
	lixo = p->prox;
	p->prox = lixo->prox;
	return lixo->dado;
	free (lixo);
	}
}
void remove_elemento (celula *le, int x){
	celula *p;
	p = le;
	while (p->prox!= NULL && p->prox->dado != x)
		p = p->prox;
	
	if (p->prox != NULL){
		celula *lixo = p->prox;
		p->prox = lixo->prox;
		free (lixo);
	}

}

void remove_todos_elementos (celula *le, int x) {
	celula *p;
	p = le;
	while(p->prox != NULL) {
		if(p->prox->dado == x){
			celula *lixo = p->prox;
			p->prox = lixo->prox;
			free(lixo);
		}
		else {
			p = p->prox;
		}	
	}
}

void divide_lista (celula *l, celula *l1, celula *l2) {
	celula *p, *a, *b, *x;
	p = l;
	a = l;
	int i;
	while (i!=12){
		if(p->prox->dado % 2 == 0){
			l1->prox = p->prox;
			p->prox = a->prox;	
			a->prox = l1->prox;
		}
		else {
			l2->prox = p->prox;
			p->prox = a->prox;	
			a->prox = l2->prox->prox;
		}
		
		
	
		i++;
		
	}

	for(b=l1->prox; b!=NULL; b = b->prox)
		printf("%d ",b->dado);
	
}

int main () {
	celula *p;
	celula *l1, *l2;
	l1 =  malloc (sizeof (celula));
	l2 =  malloc (sizeof (celula));
	p = malloc (sizeof (celula));
	p = inicializa();
	l1 = inicializa();
	l2 = inicializa();
	insere(p,1);
	insere(p,2);
	insere(p,3);
	insere(p,4);
	insere(p,5);
	insere(p,6);
	divide_lista(p, l1, l2);
	//imprime(p);
	return 0;
}
