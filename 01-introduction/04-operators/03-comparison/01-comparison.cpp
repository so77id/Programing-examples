#include <iostream>
using namespace std;


int main() {
    const int VALUE = 10;
    int v1, v2, v3, v4;
    v1 = -10;
    v2 = 10;
    v3 = 20;

    // Comparando valores iguales
    cout << "VALUE == v2: "<< (VALUE == v2) << endl;
    // Comparando valores diferentes
    cout << "VALUE == v1: "<< (VALUE == v1) << endl;
    // Comparando que sean diferentes
    cout << "VALUE != v2: " << (VALUE == v2) << endl;
    cout << "VALUE != v1: " << (VALUE == v1) << endl;

    // Comparando >
    cout << "VALUE > v1: " << (VALUE > v1) << endl;
    cout << "VALUE > v2: " << (VALUE > v2) << endl;
    cout << "VALUE > v3: " << (VALUE > v3) << endl;
     
    // Comparando <
    cout << "VALUE < v1: " << (VALUE < v1) << endl;
    cout << "VALUE < v2: " << (VALUE < v2) << endl;
    cout << "VALUE < v3: " << (VALUE < v3) << endl;

    // Comparando >=
    cout << "VALUE >= v1: " << (VALUE >= v1) << endl;
    cout << "VALUE >= v2: " << (VALUE >= v2) << endl;
    cout << "VALUE >= v3: " << (VALUE >= v3) << endl;
     
    // Comparando <=
    cout << "VALUE <= v1: " << (VALUE <= v1) << endl;
    cout << "VALUE <= v2: " << (VALUE <= v2) << endl;
    cout << "VALUE <= v3: " << (VALUE <= v3) << endl;

    // Guardando resultado en variable bool
    bool resultado = VALUE <= v2;
    cout << "resultado (VALUE <= v2): " << resultado << endl;

    return 0;
}
