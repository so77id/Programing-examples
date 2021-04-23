#include<iostream>
using namespace std;

int main() {
    int i;
    bool b;
    float f;
    double d;
    char c;

    cout << "Ingrese un numero entero: " << endl;
    cin >> i;
    cout << "el numero ingresado es: " << i << endl << endl;
    
    cout << "Ingrese un numero flotante: " << endl;
    cin >> f;
    cout << "el numero ingresado es: " << f << endl << endl;
    
    cout << "Ingrese una letra y un numero double separados por un espacio: " << endl;
    cin >> c >> d;
    cout << "la letra ingresada es: " << c << " el numero double ingresado es: " << d << endl << endl;

    cout << "Ingrese un booleano escribiendo 0 o 1" << endl;
    cin >> b;
    cout << "el booleano ingresado es: " << b << endl << endl;
    
    cout << "tambien podemos ingresar datos en lineas separadas"
         << "en la terminal, pero leerlos en una misma linea de codigo" << endl;
    
    cout << "Ingresa un numero int, luego enter, y un numero float" << endl;
    cin >> i >> f;
    cout << "los numeros ingresados son: " << i << " y " << f << endl << endl; 

    cout << "Tambien podemos ingresar dos numeros juntos en una misma linea"
         << "y pedirlos en dos lineas de cin" << endl;

    cout << "ingrese un numero int y un numero float separado por un espacio" << endl;
    cin >> i;
    cin >> f;
    cout << "los numeros ingresados son: " << i << " y " << f << endl << endl; 


    return 0;
}