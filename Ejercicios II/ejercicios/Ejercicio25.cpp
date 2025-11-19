#include <iostream>
#include <limits> 

using namespace std;
long long factorial(int k) {
    if (k < 0) return 0;
    if (k == 0 || k == 1) return 1;
    
    long long result = 1;
    for (int i = 2; i <= k; ++i) {
        result *= i; 
    }
    return result;
}

long long calcularSumaFactoriales(int n) {
    if (n <= 0) {
        return 0;
    }
    
    long long sumaTotal = 0;
    for (int i = 1; i <= n; ++i) {
        sumaTotal += factorial(i);
    }
    return sumaTotal;
}

int main() {
    int n;
    
    cout << "===================================================" << endl;
    cout << "  CALCULADORA DE SUMA DE FACTORIALES (1! + ... + n!)" << endl;
    cout << "===================================================" << endl;

    cout << "Ingrese el valor de n (entero positivo hasta 20): ";

    if (!(cin >> n)) {
        cout << "Error: Entrada no valida. Debe ingresar un numero entero." << endl;
        return 1;
    }
    if (n < 1 || n > 20) {
        cout << "Error: El valor de n debe ser un entero positivo y no mayor a 20 para evitar desbordamiento." << endl;
        return 1;
    }

    long long resultadoSuma = calcularSumaFactoriales(n);

    cout << "\nLa suma de 1! + 2! + ... + " << n << "! es: " << resultadoSuma << endl;
    
    return 0;
}