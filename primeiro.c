#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão
#include <string.h> // Inclui a biblioteca de manipulação de strings
#include <math.h> // Inclui a biblioteca de funções matemáticas
#include <ctype.h> // Inclui a biblioteca de funções de caracteres
#include <conio.h> // Inclui a biblioteca de funções de console
#include <locale.h> // Inclui a biblioteca de funções de localização



/*
auto - define uma variável local que só pode ser acessada dentro de uma função.
break - interrompe a execução de um loop.
case - define um valor específico em uma instrução switch.
char - define um caractere.
const - define uma variável que não pode ser modificada.
continue - faz com que o loop ignore o resto do código e comece a próxima iteração.
default - define uma instrução para ser executada se nenhuma outra condição for atendida.
do - executa um bloco de código enquanto uma condição específica for verdadeira.
double - define um número de ponto flutuante de precisão dupla.
else - define um bloco de código que será executado se a condição for falsa.
enum - define um conjunto de constantes nomeadas.
extern - define uma variável que é acessível por todos os programas.
float - define um número de ponto flutuante.
for - define um loop que é executado enquanto uma condição específica for verdadeira.
goto - transfere o controle para uma parte específica do código.
if - define um bloco de código que é executado se uma condição for verdadeira.
int - define um número inteiro.
long - define um número inteiro longo.
register - define uma variável local que deve ser armazenada em um registro de computador.
return - retorna um valor de uma função.
short - define um número inteiro curto.
signed - define um tipo de dado que pode armazenar valores positivos e negativos.
sizeof - retorna o tamanho de uma variável.
static - define uma variável local que é inicializada apenas uma vez.
struct - define uma estrutura de dados.
switch - avalia uma expressão e executa o bloco de código correspondente.
typedef - define um nome de tipo existente.
union - permite armazenar diferentes tipos de dados em uma variável.
unsigned - define um tipo de dado que só pode armazenar valores positivos.
void - especifica que uma função não retorna um valor.
volatile - informa ao compilador que uma variável pode ser alterada em um programa por algo que o compilador não controla.
while -  cria um loop que executa um bloco de código enquanto uma condição específica for verdadeira.
*/

//================================================ ////// =============================================================

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

//================================================ ////// =============================================================

void um () {
    int dias;           /* Declaração de Variaveis */
    float anos;
    printf ("Entre com o número de dias: "); /* Entrada de Dados */
    scanf ("%d",&dias);
    anos = dias/365.25;      /* Conversão Dias->Anos */
    printf ("\n\n%d dias equivalem a %f anos.\n", dias, anos);
};

//================================================ ////// =============================================================

void dois () {
    int a,b,c; /* Declaração de Variaveis */
    a=b=c=2; /* Atribuição de Valores */
    b= ++a; /* Pré-Incremento */
    c= b++; /* Pós-Incremento */
    printf("%d  %d  %d \n" , a, b, --c); /* Impressão dos Valores */
    system("PAUSE");
};

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

//================================================ ////// =============================================================

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

//================================================ ////// =============================================================

void imprimirNumeros () {
    int n; // Declara a variável n
    printf("Digite a quantidade de números que deseja contar: "); // Imprime na tela a mensagem
    scanf("%d", &n); // Le a qunatia de numeros que serão contados
    printNumbers(n); // Chama a função printNumbers
    system("timeout -t 10"); // Pausa o sistema9
}


//================================================ ////// =============================================================

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

//================================================ ////// =============================================================

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

//================================================ ////// =============================================================

void questao4() {
    int matriz [5][5];
    int lin,col,cont=1;
    for (lin=0;lin<5;lin++)
        for (col=0;col<5;col++)
        {matriz[lin][col] = cont;cont++;}
    system("PAUSE");
}

//================================================ ////// =============================================================

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


//================================================ ////// =============================================================

//Escreva  um  algoritmo  que  gere  números  randômicos  (0-20)  para  uma  matriz  de  ordem  5x5,
// calcule e escreva:
// a)mostre a matriz formatada
// b)a soma de todos os elementos da matriz
// c)a soma dos elementos da primeira coluna.
// d)a soma dos elementos da terceira linha da matriz

void questao6() {
    int matrix[5][5];
    int lin, col, cont = 1;
    for (lin = 0; lin < 5; lin++)
        for (col = 0; col < 5; col++) {
            matrix[lin][col] = rand() % 21;
        }

    for (lin = 0; lin < 5; lin++) {
        for (col = 0; col < 5; col++) {
            printf("%d ", matrix[lin][col]);
        }
        printf("\n");
    }

    int soma = 0;
    for (lin = 0; lin < 5; lin++) {
        for (col = 0; col < 5; col++) {
            soma += matrix[lin][col];
        }
    }
    printf("Soma de todos os elementos: %d\n", soma);

    soma = 0;
    for (lin = 0; lin < 5; lin++) {
        soma += matrix[lin][0];
    }
    printf("Soma dos elementos da primeira coluna: %d\n", soma);

    soma = 0;
    for (col = 0; col < 5; col++) {
        soma += matrix[2][col];
    }
    printf("Soma dos elementos da terceira linha: %d\n", soma);
}

//================================================ ////// =============================================================

//Escreva um programa  com uma matriz de char 3x3 e um vetor de 9 elementoschar também.
// Leia  caracteres  para  a matriz.
// Em  seguida  copie,  um  a  um,  os  caracteres  da  matriz  para  o vetor.

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




//================================================ ////// =============================================================





//Leia 2 valores inteiros e armazene-os nas variáveis A e B.
//Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo.
//Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

void questao8() {
    int A, B, X;
    scanf("%d", &A);
    scanf("%d", &B);
    X = A + B;
    printf("X = %d\n", X);
}

//================================================ ////// =============================================================

//Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais, segundo a fórmula:
//
//Distancia = Entrada
//O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.
//
//Saída
//Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 casas decimais.


double atv4(double x1, double y1, double x2, double y2) {
    // Calcula e retorna a distância
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}








//================================================ ////// =============================================================

#include <stdio.h>

int main() {
    //imprime hello word
    printf("Hello, World!\n");
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    return 0;
}
//void main () { // Função principal
//    setlocale(LC_ALL, "Portuguese"); // Define a localização para português
//    // calculoImpostoRenda(); // Chama a função calculoImpostoRenda
//    // dois (); // Chama a função dois
//    // questao3_2 (); // Chama a função questao3_2
//   questao7();
//   system("PAUSE"); // Pausa o sistema
//}; // Fim da função principal




