//
// Created by User on 23/09/2024.
//
//Escreva um algoritmoque leia 10 números.
// Para cada número lido, verifique e codifique de acordo com as regras a seguir:
// -Se o número for 0, mostre o valor do topo da pilha.
// -Se o número for par, empilheo valor.
// -Se  o  número  for  ímpar,  desempilhe  um valorexistente  na  pilha.
// Caso  a  pilha  esteja  vazia, mostre uma mensagem informando isso.
// -Se ao final do programa a pilha não estiver vazia, desempilhe todos os elementos, mostrando-os na tela


#include <stdio.h>

#define MAX 10

typedef struct {
    int topo;
    int item[MAX];
} Pilha;

void inicializaPilha(Pilha *pilha) {
    pilha->topo = -1;
}

int pilhaVazia(Pilha *pilha) {
    return pilha->topo == -1;
}

int pilhaCheia(Pilha *pilha) {
    return pilha->topo == MAX - 1;
}

void empilha(Pilha *pilha, int x) {
    if (pilhaCheia(pilha)) {
        printf("Pilha cheia\n");
    } else {
        pilha->topo++;
        pilha->item[pilha->topo] = x;
    }
}

int desempilha(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Pilha vazia\n");
        return -1;
    } else {
        int x = pilha->item[pilha->topo];
        pilha->topo--;
        return x;
    }
}

int topoPilha(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Pilha vazia\n");
        return -1;
    } else {
        return pilha->item[pilha->topo];
    }
}

int main() {
    Pilha pilha;
    inicializaPilha(&pilha);
    int n;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n == 0) {
            printf("Topo da pilha: %d\n", topoPilha(&pilha));
        } else if (n % 2 == 0) {
            empilha(&pilha, n);
        } else {
            int x = desempilha(&pilha);
            if (x != -1) {
                printf("Desempilhado: %d\n", x);
            }
        }
    }
    while (!pilhaVazia(&pilha)) {
        int x = desempilha(&pilha);
        if (x != -1) {
            printf("Desempilhado: %d\n", x);
        }
    }
    return 0;
}








