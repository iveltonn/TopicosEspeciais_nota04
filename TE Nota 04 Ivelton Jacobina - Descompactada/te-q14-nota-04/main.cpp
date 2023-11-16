#include <iostream>

int main() {
    int numero;

    while (true) {
        // Entrada do usuário
        std::cout << "Digite um número positivo (ou -1 para sair): ";
        std::cin >> numero;

        // Verifica se o número é -1 para sair do loop
        if (numero == -1) {
            std::cout << "Programa encerrado.\n";
            break;
        }

        // Verifica se o número é par ou ímpar
        if (numero % 2 == 0) {
            std::cout << numero << " é um número par.\n";
        } else {
            std::cout << numero << " é um número ímpar.\n";
        }
    }

    return 0;
}
