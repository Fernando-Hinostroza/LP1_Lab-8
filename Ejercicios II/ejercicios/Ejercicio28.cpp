#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    cout << "Descomposicion en factores primos: ";

    int divisor = 2;

    while (n > 1) {
        while (n % divisor == 0) {
            cout << divisor << " ";
            n /= divisor;
        }
        divisor++;
    }

    return 0;
}
