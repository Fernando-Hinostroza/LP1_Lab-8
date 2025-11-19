#include <iostream>

using namespace std;

void generarFibonacci(int n) {
    long long a = 0;
    long long b = 1;
    long long siguiente = 0;

    cout << "\nSerie de Fibonacci hasta la posicion " << n << ":" << endl;

    if (n >= 1) {
        cout << a;
    }

    if (n >= 2) {
        cout << ", " << b;
    }

    for (int i = 3; i <= n; ++i) {
        siguiente = a + b;
        cout << ", " << siguiente;
        
        a = b;
        b = siguiente;
    }
    cout << endl;
}

int main() {
    int n;

    cout << "=======================================" << endl;
    cout << "  GENERADOR DE SERIE DE FIBONACCI" << endl;
    cout << "=======================================" << endl;

    cout << "Ingrese la posicion n (entero positivo): ";
    if (!(cin >> n)) {
        cout << "Error: Entrada no valida. Debe ingresar un numero entero." << endl;
        return 1;
    }
    if (n <= 0) {
        cout << "Error: La posicion n debe ser un entero positivo (n >= 1)." << endl;
        return 1;
    }

    generarFibonacci(n);

    return 0;
}