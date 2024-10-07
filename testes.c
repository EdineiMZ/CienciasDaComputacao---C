//
// Created by User on 23/09/2024.
//

//
// Created by User on 23/09/2024.
//

#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dado;
    struct Nodo *anterior;
};

typedef struct Nodo nodo;
int tam;

int main() {
    nodo *TOPO = (nodo *) malloc(sizeof(nodo));
    if (!TOPO) {
        printf("Sem memoria disponivel!\n");
        exit(1);
    } else {
        inicia(TOPO); // função para iniciar a pilha
        free(TOPO);
        return 0;
    }
}