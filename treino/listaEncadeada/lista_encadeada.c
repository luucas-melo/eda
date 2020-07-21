#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
	int conteudo;
	struct lista *prox;

} celula;
void imprime (celula *le) {
	celula *p;
   for(p = le->prox;p != NULL;p = p->prox)
		printf("num %d\n",p->conteudo);
}

void imprime_rec (celula *le) {
	if (le != NULL) {
		imprime_rec (le->prox);
		printf ("num %d\n",le->conteudo);
	}
	
}
celula *busca_rec (int x, celula *p) {
	if(p == NULL || p->conteudo == x)
		return p;
	else{
		return busca_rec (x, p->prox);
	}
}
 
void insere (int x, celula *p) {
   celula *nova;
   nova = malloc (sizeof (celula));
   nova->conteudo = x;	
   nova->prox = p->prox;
   p->prox = nova;
}

int removee(celula *p){
	celula *lixo;
	lixo = p->prox;
	p->prox = lixo;
	free(lixo);
}

void busca_remove (celula *le, int x) {
	celula *p;
	if (le != NULL) {
		if (le->conteudo == x) {
		p = le;
		le = le->prox;
		free (p);
		}
		else {
			for( p = le;p->prox != NULL && p->prox->conteudo != x;p = p->prox);
				if (p->prox != NULL) {
					celula *tmp = p->prox;
					p->prox = tmp->prox;
					free(tmp);
				}
		}
	}
}
int main () {
   celula *teste;
	teste = malloc(sizeof(celula));
	insere(2, teste);
	insere(3, teste);
	insere(4, teste);
	//removee(teste);
	busca_remove(teste, 2);
	imprime(teste);
	//busca(2, *teste);
	return 0;
}


