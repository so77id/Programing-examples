#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    if(x == 0) {
        cout << "x es 0" << endl;
    } else if (x == 100) {
        cout << "x es 100" << endl;
    } else if (x == -100) {
        cout << "x es -100" << endl;
    } else {
        cout << "x no es ni 0, 100 o -100. Es: " << x << endl;
    }

    return 0;
}