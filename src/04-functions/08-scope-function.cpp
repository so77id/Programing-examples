#include<iostream>
using namespace std;

//           5      8
int suma(int a, int b) {
    // a -> 5 + 8 -> 13
    a += b;

    return a; // -> 13
}

int main() {
    int a, b;
    //     5    8
    cin >> a >> b;
    //      13
    cout << suma(a,b) << endl;
    
    //    13/5          8
    cout << a << " " << b << endl;

    return 0;
}