#include<iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Ingrese un numero: ";
    cin >> n;

    while(i <= n) {
        bool isPrime = true;
        int j = 2;

        while(j < i && isPrime) {
            if(i % j == 0) isPrime = false;
            j++;
        }

        if(isPrime) cout << i << endl;

        i++;
    }
    
} 
