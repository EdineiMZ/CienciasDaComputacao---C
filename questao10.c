//
// Created by User on 19/08/2024.
//

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão
#include <string.h> // Inclui a biblioteca de manipulação de strings
#include <math.h> // Inclui a biblioteca de funções matemáticas
#include <ctype.h> // Inclui a biblioteca de funções de caracteres
#include <conio.h> // Inclui a biblioteca de funções de console
#include <locale.h> // Inclui a biblioteca de funções de localização

//Escreva  um  algoritmo  que  gere  números  randômicos  (0-20)  para  uma  matriz  de  ordem  5x5,
// calcule e escreva:
// a)mostre a matriz formatada
// b)a soma de todos os elementos da matriz
// c)a soma dos elementos da primeira coluna.
// d)a soma dos elementos da terceira linha da matriz

void questao6() {
    int matrix[5][5];
    int lin, col, cont = 1;
    for (lin = 0; lin < 5; lin++)
        for (col = 0; col < 5; col++) {
            matrix[lin][col] = rand() % 21;
        }

    for (lin = 0; lin < 5; lin++) {
        for (col = 0; col < 5; col++) {
            printf("%d ", matrix[lin][col]);
        }
        printf("\n");
    }

    int soma = 0;
    for (lin = 0; lin < 5; lin++) {
        for (col = 0; col < 5; col++) {
            soma += matrix[lin][col];
        }
    }
    printf("Soma de todos os elementos: %d\n", soma);

    soma = 0;
    for (lin = 0; lin < 5; lin++) {
        soma += matrix[lin][0];
    }
    printf("Soma dos elementos da primeira coluna: %d\n", soma);

    soma = 0;
    for (col = 0; col < 5; col++) {
        soma += matrix[2][col];
    }
    printf("Soma dos elementos da terceira linha: %d\n", soma);
}

// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    questao6(); // Chama a função calculadora
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal
