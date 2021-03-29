#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    // if (condition) statement1 else statement2  
    // if/else con statement en la misma linea
    if (x == 100) cout << "x es 100, x:" << x << endl;
    else cout << "x no es 100, es: " << x  << endl;

    // if/else con statement en lineas diferentes
    if (x == 100)
        cout << "x es 100, x:" << x << endl;
    else
        cout << "x no es 100, es: " << x  << endl;

    // if con un block statement en la misma linea
    if (x == 100) {cout << "x es 100, x:" << x << endl;}
    else {cout << "x no es 100, es: " << x  << endl;}
    
    // if con un block statement en diferentes lineas
    if (x == 100) {
        cout << "x es 100, x:" << x << endl;
    } else {
        cout << "x no es 100, es: " << x  << endl;
    }
    // if con un block statement en diferentes lineas
    // las lalves {} pueden estar en diferentes lineas
    // comparados con el ejemplo anterior
    if (x == 100) 
    {
        cout << "x es 100, x:" << x << endl;
    }  
    else 
    {
        cout << "x no es 100, es: " << x  << endl;
    }
    
    //esto no compila
    // if(x == 100) 
    //     cout << "x es 100, x:";
    //     cout << x << endl;
    // else
    //     cout << "x no es 100, es: ";
    //     cout <<  x  << endl;

}
