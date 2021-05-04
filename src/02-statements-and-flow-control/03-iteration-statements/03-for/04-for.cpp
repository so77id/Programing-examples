#include<iostream>
using namespace std;


int main() {
    int n, f0, f1, fn;
    cout << "Ingrese el numero que quiere calcular el fib:";
    cin >> n;

    for(int i = f0 = 0, f1 = 1; i <= n; i++) {
        if(i == 0 || i == 1) {
            cout << i << "-->" << i << endl;
        } else {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;

            cout << i << "-->" << fn << endl;
        }
    }
}