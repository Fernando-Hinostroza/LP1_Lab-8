#include <iostream>
#include <cmath>
using namespace std;
int sumaDigitos(int numero) {
    int suma = 0;
    while (numero > 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}
int main() {
    int numero;
    cout<<"Digite um numero: ";
    cin>>numero;
    cout<<"Suma de Digitos: "<<sumaDigitos(numero);
    return 0;
}