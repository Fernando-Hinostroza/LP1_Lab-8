#include <iostream>
#include <iomanip>

using namespace std;

float convertirFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f; 
    return fahrenheit;
}

int main() {
    float celsius;

    cout << "========================================" << endl;
    cout << "  CONVERSOR DE TEMPERATURA C° a F°" << endl;
    cout << "========================================" << endl;
    
    cout << "Ingrese la temperatura en grados Celsius: ";
    
    if (!(cin >> celsius)) {
        cout << "Error: Entrada no válida. Debe ser un valor numerico." << endl;
        return 1;
    }

    float resultado = convertirFahrenheit(celsius);

    cout << fixed << setprecision(2);
    cout << "La temperatura en grados Fahrenheit es: " << resultado << " F°" << endl;

    return 0;
}