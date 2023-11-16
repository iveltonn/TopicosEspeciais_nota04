#include <iostream>

int main() {
    std::cout << "Múltiplos de 5 no intervalo de 1 a 100:\n";

    for (int i = 1; i <= 100; ++i) {
        if (i % 5 == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
