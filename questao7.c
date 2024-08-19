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

void calculadora() {
    int num1, num2, opcao; // Declara as variáveis
    printf("Digite o primeiro número: "); // Imprime na tela a mensagem
    scanf("%d", &num1); // Le o primeiro número
    printf("Digite o segundo número: "); // Imprime na tela a mensagem
    scanf("%d", &num2); // Le o segundo número
    printf("Escolha a operação:\n"); // Imprime na tela a mensagem
    printf("1 - Soma\n"); // Imprime na tela a mensagem
    printf("2 - Subtração\n"); // Imprime na tela a mensagem
    printf("3 - Multiplicação\n"); // Imprime na tela a mensagem
    printf("4 - Divisão\n"); // Imprime na tela a mensagem
    scanf("%d", &opcao); // Le a opção
    switch (opcao) { // Inicia a estrutura de seleção
        case 1: // Caso a opção seja 1
            printf("Soma: %d\n", num1 + num2); // Imprime na tela a soma
            break; // Interrompe a execução
        case 2: // Caso a opção seja 2
            printf("Subtração: %d\n", num1 - num2); // Imprime na tela a subtração
            break; // Interrompe a execução
        case 3: // Caso a opção seja 3
            printf("Multiplicação: %d\n", num1 * num2); // Imprime na tela a multiplicação
            break; // Interrompe a execução
        case 4: // Caso a opção seja 4
            if (num2 == 0) { // Verifica se o segundo número é zero
                printf("Não é possível dividir por zero.\n"); // Imprime na tela a mensagem
            } else { // Senão
                printf("Divisão: %.2f\n", (float)num1 / num2); // Imprime na tela a divisão
            }
            break; // Interrompe a execução
        default: // Caso contrário
            printf("Opção inválida.\n"); // Imprime na tela a mensagem


    }
}

// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    calculadora(); // Chama a função calculadora
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal