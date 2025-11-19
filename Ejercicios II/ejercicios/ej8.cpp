#include <iostream>
using namespace std;
double potencia(double base, int exponente) {
    double resultado = 1;
    int exp = (exponente < 0) ? -exponente : exponente;
    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }
    if (exponente < 0) {
        resultado = 1.0 / resultado;
    }
    return resultado;
}
int main() {
    double base;
    int exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    cout << "El resultado es: " << potencia(base, exponente) << endl;
    return 0;
}