#include<iostream>
using namespace std;

int main() {
    int a, b, c, aux;
    cin >> a >> b >> c;
    
    if(a > b) {
        if(a > c) {
            if (c > b) {
                // a > c > b
                // b <-> c
                aux = b;
                b = c;
                c = aux;
            } else {
                // a > b > c
            }
        } else {
            //c > a > b
            // c <-> a
            aux = a;
            a = c;
            c = aux;
                
            // b <-> c
            aux = c;
            c = b;
            b = aux;
        }
    } else {
        if(b > c) {
            if(c > a) {
                // b > c > a
                // a - b - c
                // a <-> b
                aux = a;
                a = b;
                b = aux;
                
                // b <-> c
                aux = b;
                b = c;
                c = aux;
            } else {
                //b > a > c
                // a <-> b
                aux = a;
                a = b;
                b = aux;

            }
        } else {
            // c > b > a
            aux = a;
            a = c;
            c = aux;
        }
    }

    cout << "a: " << a << " b: " << b << " c: " << c << endl;

    return 0;
}