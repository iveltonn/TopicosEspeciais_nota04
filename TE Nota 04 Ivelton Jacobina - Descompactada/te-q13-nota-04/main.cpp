#include <iostream>
#include <climits> // Para utilizar INT_MIN e INT_MAX

int main() {
    int n;

    // Solicitar ao usuário o número de elementos
    std::cout << "Digite a quantidade de números: ";
    std::cin >> n;

    // Verificar se o usuário digitou um valor válido para n
    if (n <= 0) {
        std::cout << "Por favor, digite um número válido para a quantidade de elementos." << std::endl;
        return 1; // Encerrar o programa com código de erro
    }

    int numero;
    int soma = 0;
    int maior = INT_MIN; // Valor inicializado com o menor valor possível
    int menor = INT_MAX; // Valor inicializado com o maior valor possível

    // Solicitar ao usuário os números e calcular o somatório, maior e menor
    for (int i = 0; i < n; ++i) {
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> numero;

        soma += numero;

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    // Exibir os resultados
    std::cout << "\nResultados:" << std::endl;
    std::cout << "Somatório: " << soma << std::endl;
    std::cout << "Maior número: " << maior << std::endl;
    std::cout << "Menor número: " << menor << std::endl;

    return 0; // Programa encerrado com sucesso
}
