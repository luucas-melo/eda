#include <stdlib.h>
#include <stdio.h>
typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

celula *inicializa () { 
	celula *novo = malloc (sizeof (celula));
	novo->prox = NULL;
	return novo;
}

void insere (celula *le, int x) { // complexidade O(1)
	celula *nova;
	nova = malloc(sizeof(celula));
	nova->dado = x;
	nova->prox = le->prox;
	le->prox = nova;
}

void imprime (celula *le){
	celula *p;
	for(p=le->prox;p != NULL;p = p->prox){
		printf("%d ",p->dado);
	}
}

void imprime_rec (celula *le) {
	if(le->prox != NULL)
		printf("%d ",le->prox->dado);
	imprime(le->prox);
}

celula *busca(celula *le, int x) { // buscar elemento
	celula *p;
	p = le;
	while (p != NULL && p->dado != x)
		p = p->prox;
	return p;
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

void removerT (celula *le, int x){
	celula *p = le;
	
	while(p->prox!=NULL){
		if(p->prox->dado == x){
			celula*lixo;
			lixo = p->prox;
			p->prox = lixo->prox;
			free(lixo);
		}
		else{
			p = p->prox;
		}
	}
	
}

int teste(celula *le) {
	celula *p;
	for(p = le->prox;p->dado!= 5;p = p->prox)
		if(p->dado == 3)
		printf("%d",p->dado);
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

void insere2(celula *le, int x){
	celula *nova;
	nova = malloc (sizeof (celula));
	nova->dado = x;
	nova->prox = le->prox;
	le->prox = nova;

}

void destroi (celula *le) {
	while(le->prox != NULL)
		remove_depois(le);
	free(le);
}
int main () {
	celula *p;
	p = inicializa();
	p = malloc(sizeof(celula));
	insere(p, 5);
	insere(p, 4);
	insere(p, 3);
	insere(p, 4);	
	insere(p, 1);
	insere2(p, 90);
	removerT(p,4);
	//teste(p);
	//int k = removee(p);
	//printf("%d\n",k);
	imprime_rec(p);
}
