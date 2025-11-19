#include <iostream>
#include <limits> 

using namespace std;

int potenciaCubo(int numero) {
    int resultado = numero * numero * numero;
    return resultado;
}

int main() {
    int n;

    cout << "===========================================" << endl;
    cout << "      CALCULADORA DE POTENCIA AL CUBO" << endl;
    cout << "===========================================" << endl;

    cout << "Ingrese un numero entero: ";

    if (!(cin >> n)) {
        cout << "Error: Entrada no valida. Debe ser un numero entero." << endl;
        return 1;
    }
    if (cin.peek() != '\n' && cin.peek() != EOF) {
        cout << "Error: Entrada invalida. Solo debe ingresar un numero entero." << endl;
        return 1;
    }

    int cubo = potenciaCubo(n);

    cout << "\nEl cubo de " << n << " (" << n << "^3) es: " << cubo << endl;

    return 0;
}