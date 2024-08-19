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

void dois () {
    int a,b,c; /* Declaração de Variaveis */
    a=b=c=2; /* Atribuição de Valores */
    b= ++a; /* Pré-Incremento */
    c= b++; /* Pós-Incremento */
    printf("%d  %d  %d \n" , a, b, --c); /* Impressão dos Valores */
    system("PAUSE");
};

// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
   dois(); // Chama a função dois
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal