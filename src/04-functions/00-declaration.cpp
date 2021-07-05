#include<iostream>
using namespace std;

int sum(int, int);
int multiplication(int, int);
int pow(int, int);

int main() {
    int base, exp;

    cin >> base >> exp;

    cout << pow(base, exp) << endl;

    return 0;
};


int sum(int n1, int n2) {
    return n1 + n2;
}

int multiplication(int n1, int n2) {
    int result = 0;
    for(; n2 > 0; n2--) {
        result = sum(result, n1);
    }

    return result;
}

int pow(int base, int exp) {
    int result = 1;
    for(; exp > 0; exp--) {
        result = multiplication(result, base);
    }

    return result;
}


