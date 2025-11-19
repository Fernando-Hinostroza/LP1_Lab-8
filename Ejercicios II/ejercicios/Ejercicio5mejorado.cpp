#include <iostream>
#include <iomanip>

using namespace std;
const float TIPO_CAMBIO = 3.80f; 

float convierteDolares(float soles) {
    float dolares = soles / TIPO_CAMBIO;
    return dolares;
}

int main() {
    float cantidadSoles;

    cout << "===========================================" << endl;
    cout << "  CONVERSOR DE SOL A DOLAR (T/C: 3.80)" << endl;
    cout << "===========================================" << endl;

    cout << "Ingrese la cantidad en soles: S/ ";
    if (!(cin >> cantidadSoles)) {
        cout << "Error: Entrada no valida. Debe ingresar un valor numerico." << endl;
        return 1;
    }
    
    if (cantidadSoles < 0) {
        cout << "Error: La cantidad de soles debe ser positiva." << endl;
        return 1;
    }

    float resultado = convierteDolares(cantidadSoles);

    cout << fixed << setprecision(2);
    cout << "\n-------------------------------------------" << endl;
    cout << "Equivalente en dolares: $" << resultado << endl;
    cout << "-------------------------------------------" << endl;

    return 0;
}