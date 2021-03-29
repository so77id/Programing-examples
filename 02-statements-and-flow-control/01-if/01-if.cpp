#include<iostream>
using namespace std;

int main() {
    // Creacion de la variable
    int x;
    // Lectura del valor
    cin >> x;

    // if (condition) statement  
    // if con statement en la misma linea
    if (x == 100) cout << "x es: " << x << endl;
    // if con statement en lineas diferentes
    if (x == 100)
        cout << "x es: " << x << endl;
    // if con un block statement en la misma linea
    if (x == 100) { cout << "x es: " << x << endl;}
    // if con un block statement en diferentes lineas
    if (x == 100) {
        cout << "x es: " << x << endl;
    }
    // if con un block statement con varias lineas en el block
    if(x == 100) {
        cout << "x es: ";
        cout << x << endl;
    }
    // if con una linea de statement y otra linea que se imprime
    // aunque x != 100
    if(x == 100) 
        cout << "x es: ";
        cout << x << endl;
}