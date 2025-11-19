#include<iostream>
using namespace std;
double calcularInteres(double capital, double tasaInteresNominal, int periodoDias) {
    double interes = (capital * tasaInteresNominal * periodoDias) / (360.0 * 100.0);
    return interes;
}
int main() {
    double capital1=1000.0;
    double tasa1=5.0;
    int dias1=90;
    double interes1=calcularInteres(capital1,tasa1,dias1);
    cout<<"Capital: $"<<capital1
        <<", Tasa: $"<<tasa1<<"%"
        <<", Dias: $"<<dias1
        <<"-> Interes: $"<<interes1<<endl;
    double capital2=5000.0;
    double tasa2=3.5;
    int dias2=180;
    double interes2=calcularInteres(capital2, tasa2, dias2);
    cout <<"Capital: $"<<capital2
              <<", Tasa: "<<tasa2<<"%"
              <<", Dias: "<<dias2
              <<" -> Interes: $"<<interes2<<endl;
    return 0;
}