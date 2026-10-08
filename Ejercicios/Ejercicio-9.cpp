#include <iostream>
using namespace std;

int main() {
    long long numero;
    cin >> numero;

    int pasos = 0;

    while (numero != 1) {
        if (numero % 2 == 0) {
            numero = numero / 2;
        } else {
            numero = 3 * numero + 1;
        }
        pasos = pasos + 1;
    }

    cout << pasos << endl;

    return 0;
}