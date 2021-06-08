#include <iostream>
using namespace std;

int main() {
    char cadena[5];

    cout << "Ingrese una palabra de maximo 4 letras: ";
    cin >> cadena;

    cout << cadena << endl;

    cout << "Imprimiendo letra por letra" << endl;

    for(int i =0; i<5; i++) {
        cout << cadena[i]<< endl;
    }

    return 0;
}