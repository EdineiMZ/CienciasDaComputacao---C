#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    /*Case para selecionar a opção desejada*/
    int opcao;
    printf("Escolha a operacao desejada: \n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            soma = num1 + num2;
            printf("A soma dos numeros e: %d\n", soma);
            break;
        case 2:
            subtracao = num1 - num2;
            printf("A subtracao dos numeros e: %d\n", subtracao);
            break;
        case 3:
            multiplicacao = num1 * num2;
            printf("A multiplicacao dos numeros e: %d\n", multiplicacao);
            break;
        case 4:
            divisao = (float)num1 / num2;
            printf("A divisao dos numeros e: %.2f\n", divisao);
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
