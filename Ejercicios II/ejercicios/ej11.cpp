#include <iostream>
#include <cmath>
using namespace std;
void ecuacionCuadratica(double a, double b, double c) {
    if (a==0) {
        cout << "No es una ecuacion cuadrática (a no puede ser 0)." << endl;
        return;
    }
    double discriminante = b*b - 4*a*c;
    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2*a);
        double x2 = (-b - sqrt(discriminante)) / (2*a);
        cout << "Las soluciones son reales y distintas:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminante == 0) {
        double x = -b / (2*a);
        cout << "La ecuacion tiene una única solución real (doble):\n";
        cout << "x = " << x << endl;
    }
    else {
        double parteReal = -b / (2*a);
        double parteImaginaria = sqrt(-discriminante) / (2*a);
        cout<<"Las soluciones son complejas:\n";
        cout<<"x1 = "<<parteReal<<" + "<<parteImaginaria<<"i"<<endl;
        cout<<"x2 = "<<parteReal<<" - "<<parteImaginaria<<"i"<<endl;
    }
}
int main() {
    double a,b,c;
    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    cout<<"Ingrese el valor de c: ";
    cin>>c;
    ecuacionCuadratica(a, b, c);
    return 0;
}