#include<iostream>
using namespace std;

int main() {
    int n, ix = 1;
    cout << "Ingrese un numero: ";
    cin >> n;

    while(ix <= n) {
        if(ix % 2 != 0) {
            cout << ix << endl;
        }
        ix++;
    }

    return 0;
} 
