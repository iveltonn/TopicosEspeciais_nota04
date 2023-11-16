#include <iostream>

int main() {
    const int totalNumeros = 20;
    int numeros[totalNumeros];
    int somaPares = 0, somaImpares = 0;
    int countPares = 0, countImpares = 0;

    // Ler 20 números
    std::cout << "Digite 20 numeros:\n";
    for (int i = 0; i < totalNumeros; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];

        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            countPares++;
        } else {
            somaImpares += numeros[i];
            countImpares++;
        }
    }

    // Calcular média dos pares e ímpares
    double mediaPares = (countPares > 0) ? static_cast<double>(somaPares) / countPares : 0;
    double mediaImpares = (countImpares > 0) ? static_cast<double>(somaImpares) / countImpares : 0;

    // Exibir resultados
    std::cout << "Media dos numeros pares: " << mediaPares << std::endl;
    std::cout << "Media dos numeros impares: " << mediaImpares << std::endl;

    return 0;
}
