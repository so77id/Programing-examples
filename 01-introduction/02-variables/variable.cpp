#include <iostream>

int main() { // utilizar doble slash permite hacer comentarios
    /*
        si el comentario es mas largo o es un bloque de texto
        no importa cuantas lineas tenga el comentario
    */
    int variable_int; // se declara la variable
    char letra = 'a'; //cuando una letra va entre '' es un char
    float f = 1.23; // se declara y se asigna valor al momento
    double d = -0.00000000000123; // es mas preciso que float
    bool boolean = false; // true o false son los valores posibles
    

    variable_int = -10;

    std::cout << "variable_int: " << variable_int << std::endl;
    std::cout << "letra: " << letra << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "boolean: " << boolean << std::endl;
}

