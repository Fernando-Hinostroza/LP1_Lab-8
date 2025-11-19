#include <iostream>
using namespace std;
int sumaDigitos(int numero) {
    numero = abs(numero);
    int suma = 0;
    while (numero > 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}
int main() {
    int numero;
    cout<<"Digite un numero: ";
    cin>>numero;
    cout<<"Suma de digitos: "<<sumaDigitos(numero)<<endl;
    return 0;
}