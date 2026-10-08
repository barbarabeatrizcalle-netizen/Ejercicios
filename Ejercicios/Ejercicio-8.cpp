#include <iostream>
using namespace std;

int main() {
    int numero;
    cin >> numero;

    int original = numero;
    int suma = 0;
    int digito;

    while (numero > 0) {
        digito = numero % 10;
        suma = suma + (digito * digito * digito);
        numero = numero / 10;
    }

    if (original == suma) {
        cout << "Es de Armstrong" << endl;
    } else {
        cout << "No es de Armstrong" << endl;
    }

    return 0;
}