#include <iostream>
#include <iomanip>

using namespace std;

float multiplicar(float num1, float num2) {
    float resultado = num1 * num2;
    return resultado;
}

float obtenerNumero(const char* mensaje) {
    float num;
    cout << mensaje;

    while (!(cin >> num)) {
        cout << "Error: Entrada no valida. Debe ser un numero." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        cout << mensaje;
    }
    return num;
}

int main() {
    cout << "===========================================" << endl;
    cout << "          CALCULADORA DE MULTIPLICACION" << endl;
    cout << "===========================================" << endl;

    float a = obtenerNumero("Ingrese el primer numero: ");
    float b = obtenerNumero("Ingrese el segundo numero: ");
    
    float producto = multiplicar(a, b);

    cout << fixed << setprecision(2);
    cout << "\nEl resultado de la multiplicacion de " << a << " x " << b << " es: " << producto << endl;

    return 0;
}