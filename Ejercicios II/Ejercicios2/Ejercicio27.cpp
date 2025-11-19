#include <iostream>
#include <cmath> 

using namespace std;

void descomponerPrimos(int n) {
    if (n <= 1) {
        cout << "El numero debe ser mayor que 1." << endl;
        return;
    }

    cout << "\nDescomposicion en factores primos de " << n << ":\n" << n << " = ";

    int temp = n;
    bool primerFactor = true;

    while (temp % 2 == 0) {
        if (!primerFactor) {
            cout << " * ";
        }
        cout << 2;
        temp /= 2;
        primerFactor = false;
    }

    for (int i = 3; i <= sqrt(temp); i = i + 2) {
        while (temp % i == 0) {
            if (!primerFactor) {
                cout << " * ";
            }
            cout << i;
            temp /= i;
            primerFactor = false;
        }
    }

    if (temp > 2) {
        if (!primerFactor) {
            cout << " * ";
        }
        cout << temp;
    }
    cout << endl;
}

int main() {
    int numero;

    cout << "===========================================" << endl;
    cout << "  DESCOMPOSICION EN FACTORES PRIMOS" << endl;
    cout << "===========================================" << endl;

    cout << "Ingrese un numero entero positivo (> 1): ";

    if (!(cin >> numero)) {
        cout << "Error: Entrada no valida. Debe ingresar un numero entero." << endl;
        return 1;
    }

    if (numero <= 1) {
        cout << "Error: El numero debe ser un entero positivo mayor que 1." << endl;
        return 1;
    }

    descomponerPrimos(numero);

    return 0;
}