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
    return base * pow(base, exp-1);
}

