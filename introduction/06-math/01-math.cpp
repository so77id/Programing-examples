#include<iostream>
#include<cmath>
using namespace std;


int main() {
    const int v1 = 10;
    const int v2 = 26;
    const int v3 = -10;

    const float f1 = 5.5;
    const float f2 = 5.4;
    

    cout << "El cuadrado de v1 es: " << pow(v1, 2) << endl;
    cout << "La raiz cuadrada de v2 es: " << sqrt(v2) << endl;
    cout << "El valor absoluto de v3 es: " << abs(v3) << endl;
    cout << "El exp(v3) es: " << exp(v3) << endl;
    cout <<  "El floor de f1 es: " << floor(f1) << " el floor de f2 es: " << floor(f2) << endl;
    cout <<  "El ceil de f1 es: " << ceil(f1) << " el ceil de f2 es: " << ceil(f2) << endl;
    cout <<  "El round de f1 es: " << round(f1) << " el round de f2 es: " << round(f2) << endl;
    cout <<  "El seno de f1 es: " << sin(f1) << " el seno de v2 es: " << sin(v2) << endl;
    
    return 0;
}