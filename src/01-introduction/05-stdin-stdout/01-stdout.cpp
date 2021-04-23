#include<iostream>
using namespace std;

int main() {
    
    int i = -13843;
    bool b = false;
    float f = 1.232312312;
    double d = -0.1312339923232332;
    char c = 'h';

    cout << "probando con una cadena de texto" << endl;
    cout << "probando con una constante: " << 'j' << endl;
    cout << "numero entero: " << i << endl;
    cout << "booleano: " << b << endl;
    cout << "float: " << f << " vs double: " << d << endl;
    cout << "un caracter: " << c << endl;
    cout << "que pasa cuando no agregamos endl? ";
    cout << "no existe el salto de linea";
    cout << endl;
    cout << "al agregarlo solo tenemos un salto de linea o enter" << endl; 

    return 0;
}