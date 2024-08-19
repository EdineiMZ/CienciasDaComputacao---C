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

struct Numeros { // Estrutura que armazena dois números
    int num1; // Primeiro número
    int num2; // Segundo número
};

struct Numeros questao1Scan() { // Função que lê dois números
    struct Numeros nums; // Declara a variável nums
    printf("Digite o primeiro número: "); // Imprime na tela a mensagem
    scanf("%d", &nums.num1); // Le o primeiro número
    nums.num1++; // Adiciona 1 ao primeiro número
    printf("Digite o segundo número: "); // Imprime na tela a mensagem
    scanf("%d", &nums.num2); // Le o segundo número
    nums.num2--; // Subtrai 1 do segundo número
    return nums; // Retorna os números
}

void questao1() { // Função que imprime números pares e ímpares
    struct Numeros nums = questao1Scan(); // Chama a função questao1Scan

    int i, pares = 0, impares = 0, soma = 0, qtd = 0; // Declara as variáveis

    if (nums.num1 > nums.num2) { // Verifica se o primeiro número é maior que o segundo
        printf("O primeiro número deve ser menor que o segundo.\n"); // Imprime na tela a mensagem
        nums = questao1Scan();                                                   // Chama a função questao1Scan
    }
    for (i = nums.num1; i <= nums.num2; i++) {                                   // Loop de num1 até num2
        printf("%d\n", i);                                                // Imprime o valor de i
        if (i % 2 == 0) {                                                       // Verifica se i é par
            pares++; // Incrementa a quantidade de pares
        } else { // Senão
            impares++; // Incrementa a quantidade de ímpares
        }
        soma += i; // Soma o valor de i
        qtd++; // Incrementa a quantidade
    }
    printf("Quantidade de pares: %d\n", pares); // Imprime na tela a quantidade de pares
    printf("Quantidade de ímpares: %d\n", impares); // Imprime na tela a quantidade de ímpares
    printf("Média aritmética: %.2f\n", (float)soma / qtd); // Imprime na tela a média aritmética
}

void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    questao1(); // Chama a função questao1
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal