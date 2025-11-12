#include <iostream> 
using namespace std; 
void saludo(int); 
int main() {     
    int veces;     
    cout<<"Ingrese la cantidad de veces a imprimir del saludo: ";     
    cin>>veces;        
    saludo(veces);     
    return 0; 
}  
void saludo(int repeticiones) {     
    int conteo=0;     
    while(conteo<repeticiones){         
        cout<<"Bienvenidos a Funciones en LP1"<<endl;         
        conteo++;     
    }  
}
