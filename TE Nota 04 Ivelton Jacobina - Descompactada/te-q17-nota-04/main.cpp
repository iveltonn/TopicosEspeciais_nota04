#include <iostream>

// Função para calcular o fatorial
unsigned long long calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    // Solicitar ao usuário para inserir o valor de N
    int n;
    std::cout << "Digite um numero inteiro e positivo N: ";
    std::cin >> n;

    // Verificar se o número é não negativo
    if (n < 0) {
        std::cout << "Por favor, insira um numero inteiro e positivo." << std::endl;
        return 1; // Saída com erro
    }

    // Calcular e exibir o fatorial
    unsigned long long fatorial = calcularFatorial(n);
    std::cout << "O fatorial de " << n << " é: " << fatorial << std::endl;

    return 0; // Saída bem-sucedida
}
