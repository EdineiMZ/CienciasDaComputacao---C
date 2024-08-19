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



void printNumbers (n)   int n;
{ // Função que imprime números
    int i; // Declara a variável i
    int number; // Declara a variável number
    for (i = 0; i < n; i++) { // Loop de 0 a 9
        printf("%d\n", i); // Imprime o valor de
    }
    //adiciona 1 no favor final e imprime
    printf("%d\n", i);
}

// Função que imprime números
void imprimirNumeros () {
    int n; // Declara a variável n
    printf("Digite a quantidade de números que deseja contar: "); // Imprime na tela a mensagem
    scanf("%d", &n); // Le a qunatia de numeros que serão contados
    printNumbers(n); // Chama a função printNumbers
    system("timeout -t 10"); // Pausa o sistema9
}

// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    imprimirNumeros(); // Chama a função imprimirNumeros
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal