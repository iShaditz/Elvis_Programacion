#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros;

    std::cout << "Ingrese 15 n�meros:" << std::endl;
    for (int i = 0; i < 15; i++) {
        int numero;
        std::cin >> numero;
        numeros.push_back(numero);
    }

    // Ordenar de mayor a menor
    std::sort(numeros.begin(), numeros.end(), std::greater<int>());

    std::cout << "Vector ordenado de mayor a menor:" << std::endl;
    for (int numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    // Ordenar de menor a mayor (sin especificar el comparador)
    std::sort(numeros.begin(), numeros.end());

    std::cout << "Vector ordenado de menor a mayor:" << std::endl;
    for (int numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    return 0;
}
