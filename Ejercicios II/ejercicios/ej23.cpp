#include <iostream>
using namespace std;
int sumaImpares(int a, int b) {
    int suma = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            suma += i;
        }
    }
    return suma;
}
int sumaPares(int a, int b) {
    int suma = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }
    return suma;
}
int main() {
    int a, b;
    cout<<"Ingrese el inicio del rango (a): ";
    cin>>a;
    cout<<"Ingrese el fin del rango (b): ";
    cin>>b;
    if (a>b) {
        cout << "Error, a debe ser <= b.\n";
        return 0;
    }
    cout<<"Suma de impares = "<< sumaImpares(a, b)<<endl;
    cout<<"Suma de pares = "<< sumaPares(a, b)<<endl;
    return 0;
}