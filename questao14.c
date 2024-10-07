//
// Created by User on 09/09/2024.
//

//Construir um programa que lêcaracteres, em seguida chama uma função que testase cada um dos caracteresé a letra A.
// Usar passagem de parâmetros por valor.
// Se o caractere for A, a função deve retornar 1, caso contrário, deve retornar 0.
// Devem ser lidos e testados, um a um, 5 caracteres

#include <stdio.h>

int isA(char c){
    if (c == 'A'){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    char c;
    for (int i = 0; i < 5; i++){
        printf("Digite um caractere: ");
        scanf(" %c", &c);
        if (isA(c)){
            printf("O caractere %c é a letra A\n", c);
        } else {
            printf("O caractere %c não é a letra A\n", c);
        }
    }
    return 0;
}




