#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

bool esPalindromo(const string& texto) {
    int izquierda = 0;
    int derecha = texto.length() - 1;

    while (izquierda < derecha) {
        if (texto[izquierda] != texto[derecha]) {
            return false;
        }
        izquierda++;
        derecha--;
    }

    return true;
}

int main() {
    string texto;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    if (esPalindromo(texto)) {
        cout << "Es un palindromo." << endl;
    } else {
        cout << "No es un palindromo." << endl;
    }

    getch(); 

    return 0;
}
