#include<iostream>
using namespace std;

int main() {
    int n, ix, f0, f1, aux;
    cout << "Ingrese un numero: ";
    cin >> n;

    f0 = ix = 0;
    f1 = 1;

    while(ix <= n) {
        if(ix == 0 || ix == 1) {
            cout << ix << " --> " << ix << endl;
        } else {
            aux = f0 + f1;
            f0 = f1;
            f1 = aux;

            cout << ix << " --> " <<  aux << endl; 
        }
        ix++;
    }

    return 0;
} 
