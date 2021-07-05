#include<iostream>
using namespace std;

int main() {
    int a,b;

    cin >> a >> b;

    if(mayor(a,b)) {
        cout << "A: " << a << " es mayor que b: " << b << endl;
    } else {
        cout << "B: " << b << " es mayor que A: " << a << endl;
    }

    return 0;
}

bool mayor(int a, int b) {
    if(a > b) return true;
    else return false;
}