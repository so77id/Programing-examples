#include<iostream>
using namespace std;

int multi(int, int);

int main() {
    int a, b;

    cin >> a >> b;

    cout << multi(a, b) << endl;

    return 0;
}

int multi(int a, int b) {
    if(b == 1) return a;
    return a + multi(a, b-1);
}

