#include <iostream>
#include <limits>
#include <string>
using namespace std;
int calcularCuadradoPorValor(int numero);
int solicitarEntero(const string& mensaje);
int main() {
    int numero_1;
    int cuadrado;
    numero_1 = solicitarEntero("Ingrese el valor numerico para calcular su cuadrado: ");
    cuadrado = calcularCuadradoPorValor(numero_1);
    cout << "El cuadrado por valor es: " << cuadrado << endl;
    cout << "El valor de numero_1 en Main es: " << numero_1 << endl;
    return 0;
}
int calcularCuadradoPorValor(int numero) {
    return numero * numero;
}
int solicitarEntero(const string& mensaje) {
    int valor;
    bool entradaValida = false;

    while (!entradaValida) {
        cout << mensaje;
        if (cin >> valor) {
            entradaValida = true;
        } else {
            try {
                if (cin.fail()) {
                    throw runtime_error("Error de entrada de datos: Se esperaba un numero entero.");
                }
            } catch (const runtime_error& error) {
                cout << error.what() << endl;
            }
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return valor;
}
