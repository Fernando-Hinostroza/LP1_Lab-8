#include<iostream>
#include<cmath>
using namespace std;
double parteDecimal(double numero) {
    double parteEntera=floor(numero);
    double decimal=numero-parteEntera;
    return decimal;
}
int main () {
    double numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    cout<<"La parte decimal es: "<<parteDecimal(numero)<<endl;
    return 0;
}