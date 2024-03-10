#include "pilha.h"

tipo_no *aloca_no( int vl){
    tipo_no *novo_no;
    novo_no = (tipo_no*)malloc(sizeof(tipo_no));
    novo_no -> valor = vl;
    novo_no -> prox = NULL;
    return novo_no;
    
}

void empilha(tipo_no ** pl, int vl ){
    tipo_no * novo_no;
    
    novo_no = aloca_no (vl);
    
    if ((*pl) == NULL){
        (*pl) = novo_no;

    }else{
        novo_no -> prox = (*pl);
        (*pl) = novo_no;
    }
}

int desempilha (tipo_no ** pl){
    tipo_no *aux;
    int vl;

    if ((*pl) != NULL){
        vl = (*pl)-> valor;
        aux = (*pl);
        (*pl) = (*pl) -> prox;
        free (aux);
        return vl;
             
    }else{
        printf ("Pilha vazia ");
    }
}

void imprimePilha(tipo_no *pl){

    printf ("Pilha: \n\n Topo -> ");
    while (pl != NULL) {
        printf("[%d] -> ", pl ->valor);
        pl = pl -> prox;

    }
    printf ("NULL\n\n");
}

int ContaElementosPilha (tipo_no *pl){
    int contador = 0;

    while ( pl != NULL)
    {
        pl = pl-> prox;
        contador ++;
    }
    return contador;
}


tipo_no *copia (tipo_no *original){
    tipo_no *pl_aux, *pl_copia;//declaração de duas pilhas, uma auxiliar e outra a cópia 
    
    //inicializa as duas como NULL
    pl_aux = NULL;
    pl_copia = NULL;


    int valor;//Vaiavel valor


    while ( original != NULL) {   //enquando a pilha origiral for diferente de NULL faça:
        valor = desempilha(&original);// variavel valor recebe a função desempilha que "empilha os valores ao contrario na variavel"
        empilha (&pl_aux, valor);//aqui a função empilha, faz com o que os valores que foram desempilhados da pilha original, seram empilhados na pilha auxiliar ao contrárioi8u
    }

    printf("A pilha auxiliar eh:\n");
    imprimePilha(pl_aux);//impressão da minha auxiliar 
    
    while (pl_aux != NULL){//enquanto a pilha auxiliar não for desempilhada totalmente, faça:
        valor = desempilha(&pl_aux);//a variavel valor está recebendo os valores desempilhados da pilha auxiliar
        empilha (&pl_copia, valor);//aqui estou empilhando os elementos da variavel valor na pilha copia, que são os valores desempilhados da pilha auxiliar ao contrário, igual na original

    }
    return pl_copia;
}