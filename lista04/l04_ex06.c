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

void mescla_listas (celula *a, celula *b, celula *l3){
	if (a==NULL && b==NULL) return;
	while (a->prox != NULL && b->prox != NULL) 
    { 
        // If a's current value is smaller or equal to 
        // b's current value. 
        if (a->prox->dado <= b->prox->dado) 
        { 
            // Store next of current Node in first list 
            celula *temp = a->prox; 
  
            // Add 'a' at the front of resultant list 
            a->prox = l3->prox; 
            l3->prox = a; 
  
            // Move ahead in first list 
            a = temp; 
        } 
  
        // If a's value is greater. Below steps are similar 
        // to above (Only 'a' is replaced with 'b') 
        else
        { 
            celula *temp = b->prox; 
            b->prox = l3->prox; 
            l3->prox = b; 
            b = temp; 
        } 
    } 
  
    // If second list reached end, but first list has 
    // nodes. Add remaining nodes of first list at the 
    // front of result list 
    while (a->prox != NULL) 
    { 
        celula *temp = a->prox; 
        a->prox = l3->prox; 
        l3->prox = a; 
        a = temp; 
    } 
  
    // If first list reached end, but second list has 
    // node. Add remaining nodes of first list at the 
    // front of result list 
    while (b->prox != NULL) 
    { 
        celula *temp = b->prox; 
        b = l3->prox; 
        l3->prox = b; 
        b = temp; 
    } 
	imprime(l3);
  
} 

int main () {
	celula *p;
	celula *l1, *l2, *l3;
	l1 =  malloc (sizeof (celula));
	l2 =  malloc (sizeof (celula));
	p = malloc (sizeof (celula));
	l3 =  malloc (sizeof (celula));
	p = inicializa();
	l1 = inicializa();
	l2 = inicializa();
	l3 = inicializa();
	insere(l1,1);
	insere(l1,2);
	insere(l1,3);
	insere(l2,4);
	insere(l2,5);
	insere(l2,6);
	mescla_listas(l1, l2,l3);
	
	return 0;
}
