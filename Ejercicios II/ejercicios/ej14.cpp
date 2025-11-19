#include <iostream>
#include <cctype>
using namespace std;
void tipoCaracter(char c) {
    c = tolower(c);
    if (isalpha(c)) {
        if (c=='a'|| c=='e' || c=='i' || c=='o' || c=='u')
            cout<<"El caracter '" << c << "' es una vocal.\n";
        else
            cout<<"El caracter '" << c << "' es una consonante.\n";
    } else {
        cout<<"El caracter '" << c << "' no es una letra.\n";
    }
}
int main() {
    string entrada;
    cout<<"Ingresa un caracter: ";
    cin>>entrada;
    if (entrada.size() != 1) {
        cout<<"Por favor ingrese solo un caracter\n";
        return 0;
    }
    tipoCaracter(entrada[0]);
    return 0;
}