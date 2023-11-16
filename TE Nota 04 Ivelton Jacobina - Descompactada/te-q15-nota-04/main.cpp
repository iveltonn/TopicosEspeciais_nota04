#include <iostream>

int main() {
    char sexo;
    int contadorMasculino = 0, contadorFeminino = 0;

    std::cout << "Digite o sexo (m/f) das pessoas. Digite @ para encerrar o programa." << std::endl;

    do {
        std::cout << "Digite o sexo (m/f/@): ";
        std::cin >> sexo;

        switch (sexo) {
            case 'm':
                contadorMasculino++;
                break;
            case 'f':
                contadorFeminino++;
                break;
            case '@':
                break;  // Encerra o loop
            default:
                std::cout << "Opção inválida. Digite novamente." << std::endl;
        }

    } while (sexo != '@');

    std::cout << "Quantidade de pessoas do sexo masculino: " << contadorMasculino << std::endl;
    std::cout << "Quantidade de pessoas do sexo feminino: " << contadorFeminino << std::endl;

    return 0;
}
