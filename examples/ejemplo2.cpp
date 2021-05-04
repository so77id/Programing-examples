#include<iostream>
using namespace std;

int main() {
    int base, exp, res;
    cin >> base  >> exp;

    res = 1;

    while(exp > 0) {
        res *=  base;
        // res = res * base
        // res = res + res + res + ... + res
        // base veces
        exp--;
    }

    cout << res << endl;

    return 0;
}

// 2 ^ 6

// 2 * 2* 2 *2 * 2 *2

