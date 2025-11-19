#include <iostream>
#include <cmath>
using namespace std;
void calcularCirculo(double radio, double &perimetro, double &area) {
    const double PI = 3.14159265358979323846;
    perimetro = 2 * PI * radio;
    area = PI * radio * radio;
}
int main() {
    double radio, perimetro, area;
    cout<<"Ingrese el radio del circulo: ";
    cin>>radio;
    if (radio < 0) {
        cout << "El radio no puede ser negativo."<<endl;
        return 0;
    }
    calcularCirculo(radio, perimetro, area);
    cout<<"Resultados:\n";
    cout<<"Perimetro: "<<perimetro<<endl;
    cout<<"Area: "<<area<<endl;
    return 0;
}