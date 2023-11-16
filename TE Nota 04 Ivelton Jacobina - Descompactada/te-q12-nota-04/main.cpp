#include <iostream>
#include <climits> // Para usar as constantes INT_MAX e INT_MIN

int main() {
    int n;

    // Solicita ao usuário a quantidade de números a serem inseridos
    std::cout << "Digite a quantidade de números: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Por favor, insira uma quantidade válida de números." << std::endl;
        return 1; // Encerra o programa com código de erro 1
    }

    int numero;
    int maior = INT_MIN; // Inicializa com o menor valor possível
    int menor = INT_MAX; // Inicializa com o maior valor possível

    for (int i = 0; i < n; ++i) {
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> numero;

        // Verifica se o número é maior que o maior atual
        if (numero > maior) {
            maior = numero;
        }

        // Verifica se o número é menor que o menor atual
        if (numero < menor) {
            menor = numero;
        }
    }

    // Exibe o maior e o menor número
    std::cout << "O maior número é: " << maior << std::endl;
    std::cout << "O menor número é: " << menor << std::endl;

    return 0; // Encerra o programa com código de sucesso
}
