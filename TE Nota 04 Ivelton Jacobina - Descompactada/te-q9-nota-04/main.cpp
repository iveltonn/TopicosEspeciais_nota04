#include <iostream>
#include <string>

int main() {
    const int numPessoas = 20;
    std::string nome[numPessoas];
    int idade[numPessoas];
    char sexo[numPessoas];

    // Entrada de dados
    for (int i = 0; i < numPessoas; ++i) {
        std::cout << "Informe o nome da pessoa " << i + 1 << ": ";
        std::cin >> nome[i];

        std::cout << "Informe a idade de " << nome[i] << ": ";
        std::cin >> idade[i];

        std::cout << "Informe o sexo (M/F) de " << nome[i] << ": ";
        std::cin >> sexo[i];
    }

    // Exibição dos dados
    std::cout << "\nPessoas do sexo masculino com mais de 21 anos:\n";
    for (int i = 0; i < numPessoas; ++i) {
        if (sexo[i] == 'M' && idade[i] > 21) {
            std::cout << nome[i] << std::endl;
        }
    }

    return 0;
}
