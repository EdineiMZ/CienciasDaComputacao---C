//
// Created by User on 07/10/2024.
//
//1.Considere a estrutura de dados fila, do tipo FIFO.
// Entidades são inseridas nessa estrutura com a operação push( ) e removidas com a operação pop( ).
// A opção a seguir que mostra o conteúdo da fila após a sequência de operações push(8), push(7), push(5), push(2), pop( ), push(8), push(7),pop( ),push(5), push(2), pop(), pop() é:
// (A) 8578
// (B) 8758
// (C) 8752
// (D) 2875
// (E) 2758

#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dado;
    struct Nodo *anterior;
};

typedef struct Nodo nodo;

int tam;

nodo *aloca() {
    nodo *novo = (nodo *) malloc(sizeof(nodo));
    printf("Novo elemento: ");
    scanf("%d", &novo->dado);
    return novo;
}

void push(nodo *TOPO) {
    nodo *novo = aloca();
    novo->anterior = TOPO->anterior;
    TOPO->anterior = novo;
    tam++;
}

nodo *pop(nodo *TOPO) {
    if (TOPO->anterior == NULL) {
        printf("A estrutura já está vazia\n\n");
        return NULL;
    } else {
        nodo *temp = TOPO->anterior;
        TOPO->anterior = temp->anterior;
        tam--;
        return temp;
    }
}

void peek(nodo *TOPO) {
    if (vazia(TOPO)) {
        printf("A estrutura está vazia!\n\n");
    } else {
        nodo *temp;
        temp = TOPO->anterior;
        printf("TOPO: %5d\n", temp->dado);
    }
}

int vazia(nodo *TOPO) {
    if (TOPO->anterior == NULL)
        return 1;
    else
        return 0;
}

int main() {
    nodo *TOPO = (nodo *) malloc(sizeof(nodo));
    TOPO->anterior = NULL;
    tam = 0;

    push(TOPO);
    push(TOPO);
    push(TOPO);
    push(TOPO);
    pop(TOPO);
    push(TOPO);
    push(TOPO);
    pop(TOPO);
    push(TOPO);
    push(TOPO);
    pop(TOPO);
    pop(TOPO);

    nodo *temp;
    temp = TOPO->anterior;
    while (temp != NULL) {
        printf("%d", temp->dado);
        temp = temp->anterior;
    }
    printf("\n");

    return 0;
}