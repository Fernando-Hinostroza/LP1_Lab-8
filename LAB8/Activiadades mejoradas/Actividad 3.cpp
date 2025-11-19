#include <iostream>
#include <limits>
using namespace std;
int ubicaMax(int valor1, int valor2);
int solicitarEntero(const string& mensaje);
int main() {
    int numero1, numero2, maximo;
    numero1 = solicitarEntero("Digite el valor numerico 1: ");
    numero2 = solicitarEntero("Digite el valor numerico 2: ");
    maximo = ubicaMax(numero1, numero2);
    cout << "Numero mayor de dos valores numericos es: " << maximo << endl;
    return 0;
}
int ubicaMax(int valor1, int valor2) {
    return (valor1 > valor2) ? valor1 : valor2;
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
