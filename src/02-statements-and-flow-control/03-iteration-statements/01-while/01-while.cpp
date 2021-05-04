#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    while(n > 0) {
        cout << n << endl;
        n--;
    }

    cout << 0 << endl;

    return 0;
}
