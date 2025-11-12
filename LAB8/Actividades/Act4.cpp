#include <iostream>  
using namespace std;   // Función por valor para calcular el cuadrado  
int calcularCuadradoPorValor(int numero_1) {      
    return numero_1 * numero_1;  
}
int main() {
    int numero_1 = 5;        
    int potencia_dos = calcularCuadradoPorValor(numero_1);      
    cout<<"El valor del cuadrado es: " << potencia_dos << endl;      
    cout<<"El valor de numero_1 en Main es: "<<numero_1<<endl;      
    return 0;  
}
