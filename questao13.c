//
// Created by User on 09/09/2024.
//


//Escrever um programa que lê 2 números inteiros e em seguida chama a função EDivisivel.Afunção 'EDivisivel(int a, int b)'deverá retornar 1 se o resto da divisão de a por b for zero, ou seja, se a for divisível por b. Caso contrário, a função deverá retornar zero.

#include <stdio.h>

int EDivisivel(int a, int b){
    if (a % b == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int a, b;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    if (EDivisivel(a, b)){
        printf("%d é divisível por %d\n", a, b);
    } else {
        printf("%d não é divisível por %d\n", a, b);
    }
    return 0;
}

