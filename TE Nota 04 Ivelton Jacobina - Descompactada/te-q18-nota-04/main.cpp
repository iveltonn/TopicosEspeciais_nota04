#include <iostream>

int main() {
    // Inicializando os primeiros dois termos
    int termo1 = 1, termo2 = 1;

    // Exibindo os dois primeiros termos
    std::cout << termo1 << " " << termo2 << " ";

    // Calculando e exibindo os próximos 18 termos
    for (int i = 3; i <= 20; ++i) {
        int proximoTermo = termo1 + termo2;
        std::cout << proximoTermo << " ";

        // Atualizando os valores dos termos para os próximos cálculos
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    return 0;
}
