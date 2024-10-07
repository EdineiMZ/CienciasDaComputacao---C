//
// Created by User on 01/09/2024.
//
#include <stdio.h>
#include <stdlib.h>


void f1();
int f2();

//--------------------------------------------------------------

//Função com retorno
int main() {
    f1();

    //--------------------------------------------------------------
    int x = f2();
    printf("%d",x);
    //--------------------------------------------------------------

    return 0;
}

//--------------------------------------------------------------

//funçao com retorno e sem parametros
int f2(){
    printf("Funcao sem parametros e com retorno\n");
    int n = 1;
    return n;
};

//--------------------------------------------------------------

//função sem retorno e sem parametros
void f1 () {
    printf("Funcao sem retorno e sem parametros\n");
};

void f3 (int a, float b) {

}