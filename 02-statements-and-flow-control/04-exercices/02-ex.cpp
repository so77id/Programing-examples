#include<iostream>
using namespace std;


int main() {
    int a, b;

    cin >> a >> b;

    if(a > b) {
        cout << "A es mayor que B" << endl;
    } else if(a == b) {
        cout << "A es igual que B" << endl;
    } else {
        cout << "A es menor que B" << endl;
    }

    return 0;
}
