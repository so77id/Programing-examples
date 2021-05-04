#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero:";
    cin >> n;

    for(int i=1; i<=n; i++) {
        bool isPrime = true;
        for(int j = 2; j < i && isPrime; j++) {
            if(i % j == 0) isPrime = false;
        }

        if(isPrime) cout << i << endl;
    }

    return 0;
}