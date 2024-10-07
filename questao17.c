//
// Created by User on 23/09/2024.
//
#include <stdio.h>
#include <stdlib.h>



nodo *aloca(){
    nodo *novo=(nodo *) malloc(sizeof(nodo));
    printf("Novo elemento: ");
    scanf("%d", &novo->dado);
    return novo;
}

void push(nodo *TOPO){
    nodo *novo=aloca();
    novo->anterior = TOPO->anterior;
    TOPO->anterior=novo;
    tam++;
}

nodo *pop(nodo *TOPO){
    if(TOPO->anterior == NULL){
        printf("A estrutura já está vazia\n\n");
        return NULL;
    }else{
        nodo *temp = TOPO->anterior;
        TOPO->anterior = temp->anterior;
        tam--;
        return temp;
    }
}

void peek(nodo *TOPO){
    if(vazia(TOPO)){
        printf("A estrutura está vazia!\n\n");
    }else{
        nodo *temp;
        temp = TOPO->anterior;
        printf("TOPO: %5d\n",temp->dado);
    }
}

