#include <iostream>
#include <climits> // Para utilizar INT_MAX e INT_MIN

int main() {
    int idade;
    int menorIdade = INT_MAX; // Inicializar com um valor grande
    int maiorIdade = INT_MIN; // Inicializar com um valor pequeno
    int somaIdades = 0;
    int contador = 0;

    std::cout << "Digite as idades (para encerrar, digite -1):" << std::endl;

    // Loop para ler as idades até que -1 seja inserido
    while (true) {
        std::cout << "Idade: ";
        std::cin >> idade;

        // Verificar se foi digitado -1 para encerrar o programa
        if (idade == -1) {
            break;
        }

        // Atualizar menor e maior idade
        if (idade < menorIdade) {
            menorIdade = idade;
        }
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        // Atualizar a soma das idades e o contador
        somaIdades += idade;
        contador++;
    }

    // Verificar se pelo menos uma idade foi inserida
    if (contador > 0) {
        // Calcular a média aritmética
        double media = static_cast<double>(somaIdades) / contador;

        // Exibir os resultados
        std::cout << "\nMenor Idade: " << menorIdade << std::endl;
        std::cout << "Maior Idade: " << maiorIdade << std::endl;
        std::cout << "Média Aritmética: " << media << std::endl;
    } else {
        // Se nenhum dado foi inserido
        std::cout << "\nNenhuma idade foi inserida." << std::endl;
    }

    return 0;
}
