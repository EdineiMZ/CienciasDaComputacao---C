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

void questao7() {
    char matriz[3][3];
    char vetor[9];
    int lin, col;
    for (lin = 0; lin < 3; lin++)
        for (col = 0; col < 3; col++) {
            printf("Digite o caractere da posição [%d][%d]: ", lin, col);
            scanf(" %c", &matriz[lin][col]);
        }

    int i = 0;
    for (lin = 0; lin < 3; lin++)
        for (col = 0; col < 3; col++) {
            vetor[i] = matriz[lin][col];
            i++;
        }

    for (i = 0; i < 9; i++) {
        printf("%c ", vetor[i]);
    }
}

// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    questao7(); // Chama a função calculadora
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal