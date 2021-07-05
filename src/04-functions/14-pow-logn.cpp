#include<iostream>
using namespace std;

int multi(int, int);
int pow(int, int);

int main() {
    int base, exp;

    cin >> base >> exp;

    cout << pow(base, exp) << endl;

    return 0;
}

int multi(int a, int b) {
    if(b == 1) return a;
    return a + multi(a, b-1);
}

int pow(int base, int exp) {
    cout << base << " " << exp << endl; 
    if(exp == 0) return 1;
    if(exp == 1) return base;

    // B^4 = b^2 * b^2
    // B^5 = b^2 * b^2 * b
    if(exp%2 == 0) {
        // par
        int r = pow(base, exp/2);
        return r*r;
    } else {
        int r = pow(base,exp/2);
        return r*r*base;
    }
}

