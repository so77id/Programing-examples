#include<iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << "a es el mayor" << endl;
        } else {
            cout << "c es el mayor" << endl;
        }
    } else if (b > c) {
        cout << "b es el mayor" << endl;
    } else {
        cout << "c es el mayor" << endl;
    }

    return 0;
}

