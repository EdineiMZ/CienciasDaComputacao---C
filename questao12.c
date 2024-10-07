//
// Created by User on 09/09/2024.
//

//Construir um programa que solicita ao usuário um número inteiro.
// Em seguida, uma função deve ser chamada para contarquantos números pares existem entre 0 eo número digitado.
// A função deve contar  a  quantidade  de  retornar  o  resultado  para  o  programa  principal.
// Construir  a  função  com passagem de parâmetrospor valore com retorno

#include <stdio.h>

void contarPares(int n, int *pares){
    for (int i = 0; i <= n; i++){
        if (i % 2 == 0){
            *pares += 1;
        }
    }
}

int main(){
    int n, pares = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    contarPares(n, &pares);
    printf("Existem %d números pares entre 0 e %d\n", pares, n);
    return 0;
}




