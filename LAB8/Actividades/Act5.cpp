#include <iostream> 
using namespace std;  // Función por valor para calcular el cuadrado 
int calcularCuadradoPorValor(int numero_1)  {     
    return numero_1 * numero_1; 
}  
int main() {     
    int numero_1 = 5;     
    int cuadrado = calcularCuadradoPorValor(numero_1);      
    cout << "El cuadrado por valor es: " << cuadrado << endl;     
    cout << "El valor de numero_1 en Main es: " << numero_1 << endl;       
    return 0; 
}
