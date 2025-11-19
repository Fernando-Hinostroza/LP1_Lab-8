#include <iostream>
using namespace std;
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void listarPrimos(int inicio, int fin) {
    for (int i = inicio; i <= fin; i++) {
        if (i == 1) {
            cout << "1 ";
        } else if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout<<endl;
}
int main() {
    listarPrimos(1, 25);
    return 0;
}