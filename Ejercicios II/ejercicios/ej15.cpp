#include <iostream>
using namespace std;
void cambio(int monto) {
    if (monto < 1 || monto > 100) {
        cout << "El monto debe estar entre 1 y 100" << endl;
        return;
    }
    int denominaciones[] = {50, 20, 10, 5, 2, 1};
    const char* nombres[] = {
        "billete(s) de 50",
        "billete(s) de 20",
        "billete(s) de 10",
        "moneda(s) de 5",
        "moneda(s) de 2",
        "moneda(s) de 1"
    };
    cout << "Desglose del cambio:\n";
    for (int i = 0; i < 6; i++) {
        int cantidad=monto/denominaciones[i];
        monto %= denominaciones[i];

        if (cantidad > 0)
            cout<<cantidad<<" "<<nombres[i]<<endl;
    }
}
int main() {
    int monto;
    cout<<"Ingrese un monto entre 1 y 100: ";
    if (!(cin >> monto)) {
        cout<<"Error de ingreso"<<endl;
        return 1;
    }
    cambio(monto);
    return 0;
}