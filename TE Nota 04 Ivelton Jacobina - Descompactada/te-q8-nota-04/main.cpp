#include <iostream>

int main() {
    // Solicita ao usuário um número inteiro positivo
    int numero;

    std::cout << "Digite um numero inteiro positivo: ";
    std::cin >> numero;

    // Verifica se o número é positivo
    if (numero <= 0) {
        std::cout << "Por favor, digite um numero inteiro positivo." << std::endl;
        return 1;  // Retorna um código de erro
    }

    // Exibe a tabuada de multiplicar
    std::cout << "Tabuada de multiplicar para o numero " << numero << ":" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}
