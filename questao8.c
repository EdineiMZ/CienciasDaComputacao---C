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

void questao4() {
    int matriz [5][5];
    int lin,col,cont=1;
    for (lin=0;lin<5;lin++)
        for (col=0;col<5;col++)
        {matriz[lin][col] = cont;cont++;}
    system("PAUSE");
}


// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    questao4(); // Chama a função calculadora
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal