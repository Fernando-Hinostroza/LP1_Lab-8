#include <iostream>
using namespace std;

void imprimirSecuencia(int filas) {
    for (int i = 1; i <= filas; i++) {
        for (int s = 0; s < filas - i; s++) {
            cout << " ";
        }
        int num = i;
        for (int j = 0; j < i; j++) {
            cout << (num % 10);
            num++;
        }
        num -= 2;  
        for (int j = 0; j < i - 1; j++) {
            cout << (num % 10);
            num--;
        }

        cout << endl;
    }
}

int main() {
    int filas;

    cout << "Ingrese el numero de filas (11 a 20): ";
    cin >> filas;

    if (filas < 11 || filas > 20) {
        cout << "Valor fuera del rango permitido." << endl;
        return 0;
    }

    imprimirSecuencia(filas);

    return 0;
}
