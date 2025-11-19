#include <iostream>
#include <limits>
using namespace std;
void saludo();
int main() {
    saludo();
    return 0;
}
void saludo() {
    int cantidadVeces = 0;
    bool entradaCorrecta = false;

    while (!entradaCorrecta) {
        cout << "Ingrese la cantidad de veces a imprimir el saludo (debe ser un entero positivo): ";

        if (cin >> cantidadVeces) {
            if (cantidadVeces > 0) {
                entradaCorrecta = true;
            } else {
                cout << "Error: La cantidad debe ser un entero positivo." << endl;
            }
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
    int contador = 0;
    while(contador < cantidadVeces) {
        cout << "Bienvenidos a Funciones en Lenguaje de Programacion I" << endl;
        contador++;
    }
}
