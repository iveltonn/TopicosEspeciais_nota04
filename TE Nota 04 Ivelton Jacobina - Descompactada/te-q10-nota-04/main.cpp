#include <iostream>

int main() {
    int limiteInferior, limiteSuperior;

    // Solicitar entrada do usuário para os limites
    std::cout << "Digite o limite inferior: ";
    std::cin >> limiteInferior;

    std::cout << "Digite o limite superior: ";
    std::cin >> limiteSuperior;

    // Garantir que o limite superior seja maior que o limite inferior
    if (limiteSuperior <= limiteInferior) {
        std::cout << "Erro: O limite superior deve ser maior que o limite inferior." << std::endl;
        return 1; // Retornar código de erro
    }

    std::cout << "Números ímpares entre " << limiteInferior << " e " << limiteSuperior << ": ";

    // Exibir números ímpares no intervalo
    for (int i = limiteInferior; i <= limiteSuperior; ++i) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0; // Retornar código de sucesso
}
