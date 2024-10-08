//
// Created by User on 07/10/2024.
//

// Construir um programa que leia 10 números inteiros e os insira em uma pilha.
// Em seguida devem ser lidos 5 operadores que podem ser “+”, “-“, “*” ou “/”,
// dois elementos de cada vez devem ser retirados da pilha e o resultado da operação
// entre eles deve ser mostrado na tela e depois guardado em uma lista.

#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Define o tamanho máximo da pilha

// Estrutura da pilha
typedef struct {
    int topo; // Índice do topo da pilha
    int item[MAX]; // Array que armazena os elementos da pilha
} Pilha;

// Função para inicializar a pilha
void inicializaPilha(Pilha *pilha) {
    pilha->topo = -1; // Define o topo como -1, indicando que a pilha está vazia
}

// Função para verificar se a pilha está vazia
int pilhaVazia(Pilha *pilha) {
    return pilha->topo == -1; // Retorna 1 (true) se a pilha estiver vazia
}

// Função para verificar se a pilha está cheia
int pilhaCheia(Pilha *pilha) {
    return pilha->topo == MAX - 1; // Retorna 1 (true) se a pilha estiver cheia
}

// Função para empilhar um elemento
void empilha(Pilha *pilha, int x) {
    if (pilhaCheia(pilha)) { // Verifica se a pilha está cheia
        printf("Pilha cheia\n");
    } else {
        pilha->topo++; // Incrementa o índice do topo
        pilha->item[pilha->topo] = x; // Adiciona o elemento no topo da pilha
    }
}

// Função para desempilhar um elemento
int desempilha(Pilha *pilha) {
    if (pilhaVazia(pilha)) { // Verifica se a pilha está vazia
        printf("Pilha vazia\n");
        return -1; // Retorna -1 se a pilha estiver vazia
    } else {
        int x = pilha->item[pilha->topo]; // Armazena o elemento do topo
        pilha->topo--; // Decrementa o índice do topo
        return x; // Retorna o elemento desempilhado
    }
}

// Função para obter o elemento do topo da pilha sem removê-lo
int topoPilha(Pilha *pilha) {
    if (pilhaVazia(pilha)) { // Verifica se a pilha está vazia
        printf("Pilha vazia\n");
        return -1; // Retorna -1 se a pilha estiver vazia
    } else {
        return pilha->item[pilha->topo]; // Retorna o elemento do topo
    }
}

int main() {
    Pilha pilha; // Declara uma pilha
    inicializaPilha(&pilha); // Inicializa a pilha

    int num;
    // Lê 10 números inteiros e os empilha
    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        empilha(&pilha, num);
    }

    int resultado;
    // Lê 5 operadores e realiza as operações
    for (int i = 0; i < 5; i++) {
        char op;
        printf("Digite um operador (+, -, *, /): ");
        scanf(" %c", &op);

        int a = desempilha(&pilha); // Desempilha o primeiro operando
        int b = desempilha(&pilha); // Desempilha o segundo operando

        // Realiza a operação de acordo com o operador lido
        switch (op) {
            case '+':
                resultado = a + b;
                break;
            case '-':
                resultado = a - b;
                break;
            case '*':
                resultado = a * b;
                break;
            case '/':
                resultado = a / b;
                break;
            default:
                printf("Operador inválido\n");
                break;
        }

        printf("Resultado: %d\n", resultado); // Mostra o resultado
        empilha(&pilha, resultado); // Empilha o resultado
    }

    return 0;
}