#include <iostream>
#include <cmath>
using namespace std;
double leerPositivo(string mensaje) {
    double valor;
    do {
        cout<<mensaje;
        cin>>valor;
        if (valor<=0) {
            cout<<"el valor debe ser mayor que 0\n";
        }
    } while (valor<=0);
    return valor;
}
double areaTrianguloEquilatero(double lado) {
    return (sqrt(3) / 4) * lado * lado;
}
double areaRombo(double D,double d) {
    return (D * d) / 2.0;
}
double volumenCubo(double lado) {
    return lado * lado * lado;
}
int main() {
    int opcion;
    do {
        cout<<"\nMENU\n";
        cout<<"1. Area del triangulo equilatero\n";
        cout<<"2. Area del rombo\n";
        cout<<"3. Volumen del cubo\n";
        cout<<"4. Finalizar\n";
        cout<<"Ingrese una opcion (1-4): ";
        cin>>opcion;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Por favor ingrese un numero\n";
            opcion = 0;
        }
        switch(opcion) {
            case 1: {
                double lado = leerPositivo("Ingrese el lado del triangulo: ");
                cout<<"Area del triangulo equilatero = "
                     << areaTrianguloEquilatero(lado) << "\n";
                break;
            }
            case 2: {
                double D = leerPositivo("Ingrese la diagonal mayor: ");
                double d = leerPositivo("Ingrese la diagonal menor: ");
                cout << "Area del rombo = " << areaRombo(D, d) << "\n";
                break;
            }
            case 3: {
                double lado = leerPositivo("Ingrese el lado del cubo: ");
                cout<<"Volumen del cubo = "
                     <<volumenCubo(lado) << "\n";
                break;
            }
            case 4:
                cout<<"Finalizando programa\n";
                break;
            default:
                cout<<"Debe ser entre 1 y 4\n";
        }
    } while (opcion != 4);
    return 0;
}