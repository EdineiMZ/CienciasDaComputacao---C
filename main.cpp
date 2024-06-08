#include <iostream>
/*
Uma Calculadora Simples
 */
int main() {
    int opcao;
    float num1, num2, resultado;
    
    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            resultado = num1 / num2;
            break;
        default:
            std::cout << "Opcao invalida\n";
            return 1;
    }
    std::cout << "Resultado: " << resultado << std::endl;
    return 0;
}
