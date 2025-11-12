#include<iostream>
using namespace std;
void tiempo(int totalSegundos,int &horas,int &minutos,int &segundos){
    horas=totalSegundos / 3600;
    totalSegundos%=3600;
    minutos=totalSegundos / 60;
    segundos=totalSegundos % 60;
}
int main(){
    int totalSegundos,h,m,s;
    cout<<"Ingrese la cantidad total de segundos: ";
    cin>>totalSegundos;
    tiempo(totalSegundos,h,m,s);
    cout<<"Equivale a: "<<h<<" hora(s), "
         <<m<<" minuto(s) y "
         <<s<<" segundo(s)."<<endl;
    return 0;
}