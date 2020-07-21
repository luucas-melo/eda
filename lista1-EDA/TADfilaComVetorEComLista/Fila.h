#include <stdio.h>
#include <stdlib.h>
#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct Mercadoria{
    char nome[80];
    float preco;
    int codigo;
} Tipo;

#define TRUE 1
#define FALSE 0
int qCreate();
int qDestroy();
int qIn(Tipo e);
int qOut(Tipo *e);
int qIsFull();
int qIsEmpty();
#endif // FILA_H_INCLUDED
