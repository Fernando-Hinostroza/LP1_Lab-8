#include <iostream>
using namespace std;
void cambio(int monto) {
    if (monto<1||monto>100) {
        cout<<"El monto debe estar entre 1 y 100"<<endl;
        return;
    }
    int billete50=monto/50;
    monto%=50;
    int billete20=monto/20;
    monto%=20;
    int billete10=monto/10;
    monto%=10;
    int moneda5=monto/5;
    monto%=5;
    int moneda2=monto/2;
    monto%=2;
    int moneda1=monto/1;
    cout<<"Desglose del cambio: "<<endl;
    if (billete50>0) cout<<billete50<<" billete/s de 50"<<endl;
    if (billete20>0) cout<<billete20<<" billete/s de 20"<<endl;
    if (billete10>0) cout<<billete10<<" billete/s de 10"<<endl;
    if (moneda5>0) cout<<moneda5<<" moneda/s de 5"<<endl;
    if (moneda2>0) cout<<moneda2<<" moneda/s de 2"<<endl;
    if (moneda1>0) cout<<moneda1<<" moneda/s de 1"<<endl;
}
int main() {
    int monto;
    cout<<"Ingrese un monto entre 1 y 100: ";
    cin>>monto;
    cambio(monto);
    return 0;
}