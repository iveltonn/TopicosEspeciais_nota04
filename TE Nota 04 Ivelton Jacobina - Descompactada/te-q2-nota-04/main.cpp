#include <iostream>

int main() {
    // Loop de 10 a 30
    for (int i = 10; i <= 30; ++i) {
        // Calcula e exibe o quadrado
        int quadrado = i * i;
        std::cout << "O quadrado de " << i << " é: " << quadrado << std::endl;
    }

    return 0;
}
