#include <iostream>
#include <iomanip>
#include <limits> 
using namespace std;

void tablaMultiplicacion(int n) {
    cout << "\n===============================" << endl;
    cout << "  Tabla de multiplicacion del " << n << endl;
    cout << "===============================" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << setw(3) << (n * i) << endl;
    }
    cout << "===============================" << endl;
}

int main() {
    int numero;

    cout << "===========================================" << endl;
    cout << "      GENERADOR DE TABLA DE MULTIPLICAR" << endl;
    cout << "===========================================" << endl;
    
    cout << "Ingrese un numero entero: ";

    if (!(cin >> numero)) {
        cout << "Error: Entrada no valida. Debe ingresar un numero entero." << endl;
        return 1;
    }
    
    if (cin.peek() != '\n' && cin.peek() != EOF) {
        cout << "Error: Entrada invalida. Solo debe ingresar un numero entero sin decimales o letras." << endl;
        return 1;
    }

    tablaMultiplicacion(numero);

    return 0;
}