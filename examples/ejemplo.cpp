#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int mul1, mul2;
    int aux, res;
    cin >> mul1 >> mul2;

    aux = abs(mul2);
    res = 0;


    while(aux > 0) {
        res += mul1;
        aux--;
    }
    
    if(mul2 < 0) {
        res *= -1;
    }

    cout << res << endl;

    return 0;
}


// 5 * 7

// 5+5+5+5+5+5+5