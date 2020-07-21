#include "Fila.h"





// experimente comentar e descomentar a linha com o #define abaixo
// para mudar a implementacao com vetor (se comentado) ou com lista encadeada
//#define COMPILA_USANDO_LISTA_ENCADEADA






// testa se vai compilar com lista...
#ifdef COMPILA_USANDO_LISTA_ENCADEADA

typedef struct node {
    Tipo conteudo;
    struct node *next;
} Node;

//   Ana  <-     Bia    <-    Clau   <-   Dani
//   ^                                    ^
// ultimo(a entrar)                primeiro (a sair)


Node *primeiro;
Node *ultimo;

int qIsFull(){
    return FALSE;
}

int qIsEmpty(){
    if (primeiro == NULL)
        return TRUE;
    return FALSE;
}

int qCreate(){
    qDestroy();
    primeiro = ultimo = NULL;
}

int qDestroy(){
    // esvaziar a lista encadeada
    while (qIsEmpty()==FALSE){
        Tipo e;
        qOut(&e);
    }
}

int qIn(Tipo e){
    Node *aux;
    aux = (Node *) malloc(sizeof(Node));
    aux->next = NULL;
    aux->conteudo = e;
    if (qIsEmpty()){
        primeiro = ultimo = aux;
        return TRUE;
    }
    ultimo->next = aux;
    ultimo = aux;
    return TRUE;
}

int qOut(Tipo *e){
    Node *aux;
    if(qIsEmpty())
        return FALSE;
    *e = primeiro->conteudo;
    aux = primeiro;
    primeiro = primeiro->next;
    free(aux);
    return TRUE;
}

#else
// ... ou implementacao com vetor

#define MAX 4
Tipo vetor[MAX];
int primeiro;
int ultimo;
int total;

int qCreate(){
   primeiro = ultimo = -1;
   total = 0;
}
int qDestroy(){
   primeiro = ultimo = -1;
   total = 0;
}
int qIn(Tipo e){
    if (qIsFull())
        return FALSE;
    if (qIsEmpty()){
        primeiro = ultimo = 0;
        vetor[primeiro] = e;
        total = 1;
        return TRUE;
    }
    ultimo = (ultimo + 1)%MAX;
    vetor[ultimo] = e;
    total++;
    return TRUE;
}
int qOut(Tipo *e){
    if (qIsEmpty())
        return FALSE;
    *e = vetor[primeiro];
    primeiro = (primeiro + 1) % MAX;	
    total--;
    return TRUE;
}
int qIsFull(){
    if (total == MAX)
        return TRUE;
    return FALSE;
}
int qIsEmpty(){
    if (total == 0)
        return TRUE;
    return FALSE;
}


#endif
