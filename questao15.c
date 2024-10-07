//
// Created by User on 09/09/2024.
//

//Escreva  um  programa  com  uma função  chamada  Troca.
// Inicialmente  devem  ser  atribuídos  os valores  100  e  200  para  as  variáveis  locais  num1  e  num2,  respectivamente.
// Em  seguida,  a  função Troca  deve  ser  chamada.
// A  função  deve  fazer  a  troca  dos  valores,  utilizando  passagem  de parâmetros porreferência.

#include <stdio.h>

void Troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int num1 = 100, num2 = 200;
    printf("num1 = %d, num2 = %d\n", num1, num2);
    Troca(&num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

