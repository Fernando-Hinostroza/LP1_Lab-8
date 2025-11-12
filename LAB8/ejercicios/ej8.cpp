#include<iostream>
using namespace std;
double potencia(double base,int exponente){
    double resultado=1;
    for (int i=1;i<=exponente;i++) {
        resultado*= base;
    }
    return resultado;
}
int main(){
    double base;
    int exponente;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese la potencia: ";
    cin>>exponente;
    cout<<"El resultado es: "<<potencia(base, exponente)<<endl;
    return 0;
}