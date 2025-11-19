#include <iostream>
#include <iomanip>
#include <limits> 

using namespace std;

float valorMaximo(float a, float b, float c, float d, float e) {
    float max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    if (d > max_val) max_val = d;
    if (e > max_val) max_val = e;
    return max_val;
}

float multiplicacion(float a, float b, float c, float d, float e) {
    return a * b * c * d * e;
}

float obtenerNumero(const char* mensaje) {
    float num;
    cout << mensaje;
    
    while (!(cin >> num)) {
        cout << "Error: Entrada no valida. Debe ser un numero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << mensaje;
    }
    return num;
}

int main() {
    cout << "=================================================" << endl;
    cout << "  CALCULADORA DE MAXIMO Y PRODUCTO DE 5 NUMEROS" << endl;
    cout << "=================================================" << endl;

    float n1 = obtenerNumero("Ingrese el primer valor: ");
    float n2 = obtenerNumero("Ingrese el segundo valor: ");
    float n3 = obtenerNumero("Ingrese el tercer valor: ");
    float n4 = obtenerNumero("Ingrese el cuarto valor: ");
    float n5 = obtenerNumero("Ingrese el quinto valor: ");

    float maximo = valorMaximo(n1, n2, n3, n4, n5);
    float producto = multiplicacion(n1, n2, n3, n4, n5);

    cout << fixed << setprecision(2);
    
    cout << "\n-------------------------------------------------" << endl;
    cout << "El valor maximo ingresado es: " << maximo << endl;
    cout << "El resultado de la multiplicacion es: " << producto << endl;
    cout << "-------------------------------------------------" << endl;

    return 0;
}