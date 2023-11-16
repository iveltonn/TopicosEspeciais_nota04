#include <iostream>

int main() {
    // Inicializando a variável de somatório
    int somatorio = 0;

    // Loop para somar os números de 20 a 60
    for (int i = 20; i <= 60; ++i) {
        somatorio += i;
    }

    // Exibindo o resultado
    std::cout << "O somatório dos números de 20 a 60 é: " << somatorio << std::endl;

    return 0;
}
