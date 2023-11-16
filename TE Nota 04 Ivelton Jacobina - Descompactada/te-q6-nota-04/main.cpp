#include <iostream>
#include <cmath>

int main() {
    int N;

    // Solicitar ao usuário o valor de N
    std::cout << "Digite o valor de N: ";
    std::cin >> N;

    // Loop para entrar com N números
    for (int i = 0; i < N; ++i) {
        double numero;

        // Solicitar ao usuário o número atual
        std::cout << "Digite o numero " << i + 1 << ": ";
        std::cin >> numero;

        // Calcular e exibir a metade do número
        double metade = numero / 2;
        std::cout << "Metade do numero: " << metade << std::endl;

        // Calcular e exibir a raiz cúbica do número
        double raizCubica = cbrt(numero);
        std::cout << "Raiz cubica do numero: " << raizCubica << std::endl;
    }

    return 0;
}
