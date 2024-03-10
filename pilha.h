#ifndef __PILHA_H__
#define __PILHA_H__

#include <stdio.h>
#include <stdlib.h>

struct est_no
{
    int valor;
    struct est_no *prox;

};
typedef struct est_no tipo_no;

tipo_no *aloca_no(int);
void empilha(tipo_no **, int );
int desempilha (tipo_no **);
void imprimePilha(tipo_no *);
int ContaElementosPilha (tipo_no *);
tipo_no *copia (tipo_no *);

#endif