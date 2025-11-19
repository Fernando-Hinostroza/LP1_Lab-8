#include <iostream>

using namespace std;
long long calcularSumaHastaN(int n) {
    if (n <= 0) {
        return 0;
    }
    
    return (long long)n * (n + 1) / 2;
}

int main() {
    int numero;
    
    cout << "==========================================" << endl;
    cout << "  CALCULADORA DE SUMA DE 1 HASTA N" << endl;
    cout << "==========================================" << endl;

    cout << "Ingrese el valor de n (numero entero positivo): ";

    if (!(cin >> numero)) {
        cout << "Error: Entrada no valida. Debe ingresar un numero entero." << endl;
        return 1;
    }
    
    if (numero < 1) {
        cout << "Error: El numero 'n' debe ser un entero positivo (n >= 1)." << endl;
        return 1;
    }
    long long suma = calcularSumaHastaN(numero);

    cout << "\nLa suma de 1 + 2 + 3 + ... + " << numero << " es: " << suma << endl;
    
    return 0;
}