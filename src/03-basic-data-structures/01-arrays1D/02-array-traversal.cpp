#include<iostream>
using namespace std;

int main() {
    int list[5] = {0, 8, 5, 2, 1};

    cout << "left traversal" << endl;
    for(int i = 0; i < 5; i++) {
        cout << list[i] << endl;
    }

    cout << "--------"<< endl;
    
    cout << "right traversal" << endl;
    for(int i = 4; i >= 0; i--) {
        cout << list[i] << endl;
    }

    return 0;
}