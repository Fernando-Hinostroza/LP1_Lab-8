#include <iostream>
#include <cmath>
using namespace std;
double evaluarPolinomio(double x) {
    return 3 * pow(x, 5) - 5 * pow(x, 3) + 2 * x - 7;
}
int main() {
    double valores[] = {0, 1, -1, 2, -2, 0.5};
    int n = sizeof(valores) / sizeof(valores[0]);
    cout << "Evaluacion del polinomio: r = 3x^5 - 5x^3 + 2x - 7\n";
    for (int i = 0; i < n; i++) {
        double x = valores[i];
        double resultado = evaluarPolinomio(x);
        cout << "x = " << x << " -> r = " << resultado << std::endl;
    }
    return 0;
}