#include <iostream>
#include <string.h>

using namespace std;
int main() {
string invertirFrase(const string & frase)
string fraseInvertida;
    for (int i = frase.length() - 1; i >= 0; --i) {
        fraseInvertida += frase[i];
    }
    return fraseInvertida;

 

string frase;
cout << "Ingrese una frase: ";
getline(std::cin, frase);
string fraseInvertida = invertirFrase(frase);
cout << "Frase invertida: " << fraseInvertida <<endl;

    return 0;
}

