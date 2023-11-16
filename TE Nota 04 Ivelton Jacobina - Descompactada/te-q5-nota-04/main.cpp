#include <iostream>
#include <cmath> // Inclui a biblioteca para funções matemáticas, como a raiz cúbica

int main() {
    const int quantidadeNumeros = 10;

    // Declara um array para armazenar os números
    double numeros[quantidadeNumeros];

    // Entrada de dados
    std::cout << "Digite dez números:" << std::endl;
    for (int i = 0; i < quantidadeNumeros; ++i) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    // Saída de dados
    std::cout << "\nMetade e raiz cúbica de cada número:" << std::endl;
    for (int i = 0; i < quantidadeNumeros; ++i) {
        // Exibe a metade
        std::cout << "Número " << i + 1 << ": " << "Metade: " << numeros[i] / 2;

        // Exibe a raiz cúbica
        std::cout << ", Raiz Cúbica: " << cbrt(numeros[i]) << std::endl;
    }

    return 0;
}
