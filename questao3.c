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

/*  3.2 Pense em um exemplo para cada um dos itens abaixo, e aponte qual o tipo de cada um dos valores:
    I. Nome de Rua
    II. Número de Casa
    III. Idade de uma pessoa
    IV. Estado civil
    V. Peso de uma pessoa
    VI. Valor do salário
    VII. Nome de carro
    VIII. Preço do combustível
    IX. Número de pessoas em uma fila

*/

void questao3_2 () {
    char nomeRua[50] = "Rua dos Bobos"; // I. Nome de Rua
    int numeroCasa = 123; // II. Número de Casa
    int idade = 25; // III. Idade de uma pessoa
    char estadoCivil[50] = "Solteiro"; // IV. Estado civil
    float peso = 70.5; // V. Peso de uma pessoa
    float salario = 1500.00; // VI. Valor do salário
    char nomeCarro[50] = "Fusca"; // VII. Nome de carro
    float precoCombustivel = 4.50; // VIII. Preço do combustível
    int numeroPessoasFila = 10; // IX. Número de pessoas em uma fila
    printf("Nome da Rua: %s\n", nomeRua);
    printf("Numero da Casa: %d\n", numeroCasa);
    printf("Idade: %d\n", idade);
    printf("Estado Civil: %s\n", estadoCivil);
    printf("Peso: %.2f\n", peso);
    printf("Salario: %.2f\n", salario);
    printf("Nome do Carro: %s\n", nomeCarro);
    printf("Preco do Combustivel: %.2f\n", precoCombustivel);
    printf("Numero de Pessoas na Fila: %d\n", numeroPessoasFila);
}



// Função principal
void main () { // Função principal
    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
    questao3_2(); // Chama a função questao3_2
    system("PAUSE"); // Pausa o sistema
}; // Fim da função principal