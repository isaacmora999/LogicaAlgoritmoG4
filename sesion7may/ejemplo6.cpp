#include <iostream>
using namespace std;

int main() {
    int numero;

    
    cout << "Ingrese un número : ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;

    int i = 1; 
    while (i <= 12) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
        i++; 
    }

    return 0;
}

