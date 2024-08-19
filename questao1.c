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

void um () {
    int dias;           /* Declaração de Variaveis */
    float anos;
    printf ("Entre com o número de dias: "); /* Entrada de Dados */
    scanf ("%d",&dias);
    anos = dias/365.25;      /* Conversão Dias->Anos */
    printf ("\n\n%d dias equivalem a %f anos.\n", dias, anos);
};


// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    um(); // Chama a função um
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal
