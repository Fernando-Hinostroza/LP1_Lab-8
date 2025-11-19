#include <iostream>
using namespace std;
int sumatoriaDivisibles(int a, int b, int c) {
    int suma = 0;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            suma += i;
        }
    }
    return suma;
}
int main() {
    int a,b,c;
    cout<<"Ingrese el inicio del intervalo (a): ";
    cin>>a;
    cout<<"Ingrese el fin del intervalo (b): ";
    cin>>b;
    cout<<"Ingrese el numero divisor (c): ";
    cin>>c;
    if (c == 0) {
        cout<<"Error, no se puede dividir entre cero" << endl;
        return 0;
    }
    if (a > b) {
        cout<<"Error, a debe ser menor o igual que b" << endl;
        return 0;
    }
    int resultado = sumatoriaDivisibles(a, b, c);
    cout<<"La sumatoria de los numeros divisibles por " << c
         << " en el intervalo [" << a << ", " << b << "] es: "
         << resultado << endl;
    return 0;
}