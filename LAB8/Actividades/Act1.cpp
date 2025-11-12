#include <iostream> 
using namespace std; 
void saludo();
int main() { 
    saludo(); 
    return 0; 
} 
void saludo() { 
    int veces; 
    cout<<"Ingrese la cantidad de veces a imprimir el saludo: "; 
    cin>>veces; 
    int i=0; 
    while(i<veces){        
        cout<<"Bienvenidos a Funciones en Lenguaje de Programacion I"<<endl;         
        i++;     
    }  
}
