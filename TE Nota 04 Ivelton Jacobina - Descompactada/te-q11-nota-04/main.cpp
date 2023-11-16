#include <iostream>

int main() {
    int N;

    // Solicita ao usuário o valor de N
    std::cout << "Digite a quantidade de números (N): ";
    std::cin >> N;

    // Verifica se N é maior que 0
    if (N <= 0) {
        std::cerr << "Por favor, insira um valor válido para N maior que zero." << std::endl;
        return 1; // Encerra o programa com código de erro 1
    }

    double soma = 0.0;
    double numero;

    // Solicita ao usuário os N números e calcula o somatório
    for (int i = 0; i < N; ++i) {
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> numero;
        soma += numero;
    }

    // Exibe o somatório
    std::cout << "O somatório dos " << N << " números é: " << soma << std::endl;

    return 0; // Programa encerrado com sucesso
}
