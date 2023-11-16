#include <iostream>

int main() {
    // Loop de 10 a 30
    for (int i = 10; i <= 30; ++i) {
        // Verifica se o número é múltiplo de 3
        if (i % 3 == 0) {
            // Exibe o número
            std::cout << i << " ";
        }
    }

    // Pula uma linha após exibir os números
    std::cout << std::endl;

    return 0;
}
