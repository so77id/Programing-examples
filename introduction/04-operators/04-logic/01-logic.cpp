#include<iostream>
using namespace std;

int main() {
    bool b1, b2;
    int i1, i2;

    b1 = i1 = 0;
    i2 = b2 = 10;
    
    //Ejemplos con AND
    cout << "Ejemplos con AND" << endl;
    cout << "i1 && i2: " << (i1 && i2) << endl;
    cout << "b1 && b2: " << (b1 && b2) << endl;
    cout << "i1 && b1: " << (i1 && b1) << endl;
    cout << "i2 && b2: " << (i2 && b2) << endl;
    cout << endl;

    //Ejemplos con OR
    cout << "Ejemplos con OR" << endl;
    cout << "i1 || i2: " << (i1 || i2) << endl;
    cout << "b1 || b2: " << (b1 || b2) << endl;
    cout << "i1 || b1: " << (i1 || b1) << endl;
    cout << "i2 || b2: " << (i2 || b2) << endl;
    cout << endl;

    //Ejemplos con Not
    cout << "Ejemplos con NOT" << endl;
    cout << "!i1: " << (!i1) << endl;
    cout << "!i2: " << (!i2) << endl;
    cout << "!b1: " << (!b1) << endl;
    cout << "!b2: " << (!b2) << endl;
    cout << endl;

    //Ejemplos con combinaciones de operadores

    cout << "Ejemplos con combinaciones de operadores" << endl;
    cout << "!i1 && i2: " << (!i1 && i2) << endl;
    cout << "!b2 && !i2: " << (b2 && i2) << endl;
    cout << "!(b2 && i2): " << !(b2 && i2) << endl;
    cout << "((b2 || i2) && (b1 || i1)): " << ((b2 || i2) && (b1 || i1)) << endl;
    cout << "(!(b2 || i2) && !(b1 || i1)): " << (!(b2 || i2) && !(b1 || i1)) << endl;
    cout << "!((b2 || i2) && (b1 || i1)): " << !((b2 || i2) && (b1 || i1)) << endl;

    return 0;
}