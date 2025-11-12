#include<iostream>
#include<cmath>
using namespace std;
void calcularCirculo(double radio, double &perimetro, double &area){
    const double PI=3.14159265358979323846;
    perimetro=2*PI*radio;
    area=PI*pow(radio,2);
}
int main(){
    double radio, perimetro, area;
    cout<<"Ingrese el radio del circulo: ";
    cin>>radio;
    calcularCirculo(radio, perimetro, area);
    cout<<"Resultados:"<<endl;
    cout<<"Perimetro: "<<perimetro<<endl;
    cout<<"Area: "<<area<<endl;
    return 0;
}