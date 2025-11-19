#include <iostream>
#include <iomanip>

using namespace std;

void calculaAreaYPerimetro(double lado) {
    if (lado <= 0) {
        cout << "Error: La longitud del lado debe ser un valor positivo." << endl;
        return;
    }

    double area = lado * lado;
    double perimetro = 4.0 * lado;

    cout << fixed << setprecision(2);
    cout << "\n--- Resultados para un Cuadrado de Lado " << lado << " ---" << endl;
    cout << "Area del cuadrado: " << area << endl;
    cout << "Perimetro del cuadrado: " << perimetro << endl;
}

int main() {
    double longitudLado;

    cout << "===============================================" << endl;
    cout << "         CALCULADORA DE CUADRADO (ÁREA Y PERÍMETRO)" << endl;
    cout << "===============================================" << endl;

    cout << "Ingrese la longitud del lado del cuadrado: ";

    if (!(cin >> longitudLado)) {
        cout << "Error: Entrada no válida. Debe ser un número." << endl;
        return 1;
    }

    calculaAreaYPerimetro(longitudLado);

    return 0;
}