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

void questao5() {
    //Construir  uma  matriz  com  5  strings  de  20  posições  cada  (5x20).
    // Em  seguida  executar  as seguintes opções:
    // a) Mostrar uma determinada linha(linhas 0, 1, 2, 3 e 4)
    // b) Mostrar todas as linhas
    // c)Mostrar o número de caracteres válidos em cada string

    int matrix[5][20];
    int lin, col, cont = 1;
    for (lin = 0; lin < 5; lin++)
        for (col = 0; col < 20; col++) {
            matrix[lin][col] = cont;
            cont++;
        }
    system("TIMEOUT -t 3");

    int option;

    while (option != 4) {

        printf("Escolha uma opção:\n");
        printf("1 - Mostrar uma linha\n");
        printf("2 - Mostrar todas as linhas\n");
        printf("3 - Mostrar o número de caracteres válidos em cada string\n");
        printf("4 - Sair\n");

        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Digite a linha que deseja mostrar: ");
                scanf("%d", &lin);
                for (col = 0; col < 20; col++) {
                    printf("%d ", matrix[lin][col]);
                }
                break;
            case 2:
                for (lin = 0; lin < 5; lin++) {
                    for (col = 0; col < 20; col++) {
                        printf("%d ", matrix[lin][col]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                for (lin = 0; lin < 5; lin++) {
                    int count = 0;
                    for (col = 0; col < 20; col++) {
                        if (matrix[lin][col] != 0) {
                            count++;
                        }
                    }
                    printf("Linha %d: %d caracteres válidos\n", lin, count);
                }
                break;
            case 4:
                break;
        }

    }

}

// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    questao5(); // Chama a função calculadora
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal