#include <iostream>

int main() {
    // Declaração das variáveis
    int A, B, resultado = 1;

    // Solicita ao usuário para inserir os valores de A e B
    std::cout << "Digite o valor de A: ";
    std::cin >> A;

    std::cout << "Digite o valor de B: ";
    std::cin >> B;

    // Calcula A^B
    for (int i = 0; i < B; i++) {
        resultado *= A;
    }

    // Exibe o resultado
    std::cout << A << "^" << B << " = " << resultado << std::endl;

    return 0;
}
