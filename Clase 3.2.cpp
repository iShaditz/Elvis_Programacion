#include <iostream>

using namespace std;
int main() {
    int matrizPaulo[4][4];

    for (int i=0; i<4; i++) {
        for (int m=0; m<4; m++) {
            cout << "Ingrese el elemento en la posición [" << i << "][" << m << "]: ";
            cin >> matrizPaulo[i][m];
        }
    }

    for (int i = 0; i < 4; i++) {
        int suma = 0;
        for (int m = 0; m < 4; m++) {
            suma += matrizPaulo[i][m];
        }
        cout << "La suma de la fila " << i + 1 << " es: " << suma <<endl;
    }

    return 0;
}
