#include <iostream>
#include <climits>

int main() {
    const int totalPessoas = 20;
    int idades[totalPessoas];

    // Entrar com as idades
    std::cout << "Digite as idades das pessoas:\n";
    for (int i = 0; i < totalPessoas; ++i) {
        std::cout << "Pessoa " << i + 1 << ": ";
        std::cin >> idades[i];
    }

    // Calcular a média, a maior e a menor idade
    int somaIdades = 0;
    int maiorIdade = INT_MIN;
    int menorIdade = INT_MAX;

    for (int i = 0; i < totalPessoas; ++i) {
        somaIdades += idades[i];

        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
        }

        if (idades[i] < menorIdade) {
            menorIdade = idades[i];
        }
    }

    // Calcular a média
    double media = static_cast<double>(somaIdades) / totalPessoas;

    // Exibir os resultados
    std::cout << "\nResultados:\n";
    std::cout << "Média das idades: " << media << "\n";
    std::cout << "Maior idade: " << maiorIdade << "\n";
    std::cout << "Menor idade: " << menorIdade << "\n";

    return 0;
}
