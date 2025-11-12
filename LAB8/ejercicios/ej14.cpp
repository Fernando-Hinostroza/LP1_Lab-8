#include <iostream>
#include <cctype>
using namespace std;
void tipocaractere(char c) {
    c=tolower(c);
    if (isalpha(c)) {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
            cout<<"El caracter "<<c<<" es una vocal"<<endl;
        } else {
            cout<<"El caracter "<<c<<" es una consonante"<<endl;
        }
    } else {
        cout<<"El caracter "<<c<<" no es una letra, es otro"<<endl;
    }
}
int main() {
    char caracter;
    cout<<"Ingresa un caracter: ";
    cin>>caracter;
    tipocaractere(caracter);
    return 0;
}