#include <iostream>
/*
Uma Calculadora Simples
 */
int main() {
    int opcao;
    float num1, num2, resultado;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    std::cout << "Escolha a operacao: \n";
    std::cout << "1 - Soma\n";
    std::cout << "2 - Subtracao\n";
    std::cout << "3 - Multiplicacao\n";
    std::cout << "4 - Divisao\n";
    std::cin >> opcao;
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