#include <iostream>
using namespace std;
int MCD(int a,int b) {
    while (b!=0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}
int main() {
    int x,y;
    cout<<"Ingrese dos numeros: ";
    cin>>x>>y;
    cout<<"El MCD es: "<< MCD(x, y)<<endl;
    return 0;
}