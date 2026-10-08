#include <iostream>
using namespace std;

int main() {
    long long numero;
    cin >> numero;

    long long original = numero;
    long long invertido = 0;
    long long digito;

    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    if (original == invertido) {
        cout << "Es capicua" << endl;
    } else {
        cout << "No es capicua" << endl;
    }

    return 0;
}