#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string tipoTriangulo(double a, double b, double c) {
    double lados[3] = {a, b, c};
    sort(lados, lados + 3);
    double L1=lados[0];
    double L2=lados[1];
    double L3=lados[2];
    if (L1+L2<=L3) {
        return "No es un triangulo";
    }
    double sumaCuadrados=L1*L1+L2*L2;
    double mayorCuadrado=L3*L3;
    if (sumaCuadrados==mayorCuadrado) {
        return "Triangulo rectangulo";
    }
    else if (sumaCuadrados>mayorCuadrado) {
        return "Triangulo acutangulo";
    }
    else {
        return "Triangulo obtusangulo";
    }
}
int main() {
    double a, b, c;
    cout<<"Ingres los 3 lados: ";
    cin>>a>>b>>c;
    cout<<tipoTriangulo(a, b, c)<<endl;
    return 0;
}