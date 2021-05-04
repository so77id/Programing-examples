#include<iostream>
using namespace std;


int main() {
    int n;
    bool isPrime = true;
    cin >> n;

    for(int i=2; i<n; i++){
        if(n % i == 0) {
            isPrime = false;
        }
    }

    if(isPrime) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }

    return 0;
}