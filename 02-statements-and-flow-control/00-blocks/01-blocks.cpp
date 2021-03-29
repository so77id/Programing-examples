#include<iostream>
using namespace std;

int main() {                    // Inicio bloque main
    int A = 0;                  // Declaracion de la variable A,
                                // la cual pertenece al bloque main
    int B = 8;                  // Declaracion de la variable B,
                                // tambien pertenece al bloque main

    /*
        Inicio de otro bloque, todas las variables declaradas en este bloque
        existen solo dentro de el.
        Un bloque puede usar variables creadas en bloques que contienen al bloque
        actual.
    */
    {                           // Inicio del nuevo bloque
        int A = 3;              // Declaracion de la variable A dentro del nuevo bloque
        int C = 10;             // Declaracion de la variable C dentro del nuevo bloque
        cout << A << endl;      // Imprimimos el valor de la variable A del nuevo bloque
        cout << B << endl;      // Imprimimos el valor de B la cual pertenece al bloque main
        cout << C << endl;      // Imprimimos el valor de la variable C del nuevo bloque
    }                           // Fin del nuevo bloque
    

    cout << A << endl;          // Imprimimos el valor de la variable A del bloque main
    cout << B << endl;          // Imprimimos el valor de la variable A del bloque main
    // cout << C << endl;          // Esta linea da error de compilacion, pq la variable C
                                // solo existe dentro del nuevo bloque

    return 0;                   // Retorno de la funcion main
}                               // Fin del bloque main

