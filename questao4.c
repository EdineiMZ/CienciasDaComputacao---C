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

void calculoImpostoRenda () {
    //Uma empresa contrata um consultor a R$1.200,00 por dia.
    // Construir um programa que solicite o número de dias trabalhados pelo consultor e mostre o valor que deverá ser pago a ele, sabendo-se que são descontados 30% para o imposto de renda.
    float valorDia = 1200.00; // Valor do dia de trabalho do consultor
    int diasTrabalhados; // Dias trabalhados pelo consultor
    float valorTotal; // Valor total antes do desconto
    float impostoRenda; // Valor do imposto de renda

    // Solicita o número de dias trabalhados
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    // Calcula o valor total antes do imposto
    valorTotal = valorDia * diasTrabalhados;

    // Calcula o valor do imposto de renda (30% do valor total)
    impostoRenda = valorTotal * 0.30;

    // Calcula o valor final após o desconto do imposto de renda
    valorTotal = valorTotal - impostoRenda;

    // Mostra o valor final a ser pago ao consultor
    printf("O valor a ser pago ao consultor é de R$ %.2f\n", valorTotal);
}

// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    calculoImpostoRenda(); // Chama a função calculoImpostoRenda
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal