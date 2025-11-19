#include <iostream>
#include <cmath>
using namespace std;
double parteDecimal(double numero) {
    double parteEntera;
    return modf(numero, &parteEntera);
}
int main() {
    double numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    cout<<"La parte decimal es: "<<parteDecimal(numero)<<endl;
    return 0;
}