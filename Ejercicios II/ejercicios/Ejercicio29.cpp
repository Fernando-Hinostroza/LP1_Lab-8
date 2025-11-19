#include <iostream>
using namespace std;

void imprimirFigura(int altura, char simbolo) {
    for (int i = altura; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << simbolo;
        }
        cout << endl; 
    }
}

int main() {
    int altura;
    char simbolo;

    cout << "Ingrese la altura: ";
    cin >> altura;

    cout << "Ingrese el caracter a usar: ";
    cin >> simbolo;

    imprimirFigura(altura, simbolo);

    return 0;
}
