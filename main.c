/**
 
Universidade Federal de Mato Grosso
Bacharelado em Ciencia da Computacao
@file main.c
@author Prof. Ivairton
@brief Arquivo para testes.
@version 0.1
@date 2023-12-12
@copyright Copyright (c) 2023
*/

#include<stdio.h>
#include<stdlib.h>

#include "pilha.h"

int main(int argc, char *argv[]) {

    tipo_no *minha_pilha;
    tipo_no *pilha_copiada;
    minha_pilha = NULL;
    pilha_copiada = NULL;

    empilha(&minha_pilha, 4);//primeiro valor a ser inserido, ulttimo a ser removido
    empilha(&minha_pilha, 9);
    empilha(&minha_pilha, 5);
    empilha(&minha_pilha, 6);
    empilha(&minha_pilha, 7);
    empilha(&minha_pilha, 19);
    empilha(&minha_pilha, 10);
    empilha(&minha_pilha, 100);//ultimo valor a ser inserio, primeiro a ser removido
   
    int QtdElementos = ContaElementosPilha(minha_pilha);
    
  
    imprimePilha(minha_pilha);
    
    printf("A quantidade de elementos da pilha eh : %d \n\n", QtdElementos);

    int quantidadeElementos = ContaElementosPilha(minha_pilha);
    printf("\nQuantidade de elementos na fila: \n%d\n", quantidadeElementos);


    printf("valor removido = %d ", desempilha(&minha_pilha));
    imprimePilha (minha_pilha);

    printf("A quantidade de elementos da pilha após remoção eh : %d \n\n", QtdElementos -1 );

    printf("=============================================================================\n\n");
    printf("INICIO DO TESTE SOBRE COPIAS\n\n");

    printf("A pilha original é :");
    imprimePilha (minha_pilha);
    printf("\n\n");

    pilha_copiada = copia(minha_pilha);

    printf("A pilha original continua sendo: ");
    imprimePilha (minha_pilha);
    printf("\n\n");

    printf("A copia da pilha original eh");
    imprimePilha (pilha_copiada);
    printf("\n\n");


    return EXIT_SUCCESS;
}