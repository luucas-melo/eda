#include "Fila.h"
int main(){
    Tipo vet[]={
        { "Celular", 1800.00, 1},
        { "DVD", 100.00, 2},
        { "TV", 2500.00, 3},
        { "Blueray", 500.00, 4},
        { "XBOX", 2100.00, 5}
    };
    qCreate();// cria��o da fila
    int tam = sizeof(vet)/sizeof(Tipo);
    for(int i=0;i<tam;i++){
        if (qIsFull() == FALSE)
            qIn(vet[i]); // adi��o do elemento
        else
            printf("\nfila cheia\n\n");
    }
    while(qIsEmpty()==FALSE){
        Tipo aux;
        qOut(&aux); // adi��o do elemento
        printf("saiu %s\n", aux.nome);
    }
    qDestroy();// destrui��o do TAD fila
    return 0;
}
