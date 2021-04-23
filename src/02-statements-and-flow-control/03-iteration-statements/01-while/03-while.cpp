#include<iostream>
using namespace std;

int main() {
    int n, ix = 2;
    bool isPrime = true;

    cout << "Ingrese un numero: ";
    cin >> n;

    while(ix < n && isPrime) {
        if(n % ix == 0) {
            isPrime = false;
        }
        ix++;
    }

    if(isPrime) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }

    return 0;
} 
