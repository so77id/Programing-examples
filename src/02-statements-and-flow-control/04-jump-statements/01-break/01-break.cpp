#include<iostream>
using namespace std;

int main() {
    for(int i=10; i>=0; i--) {
        if(i == 2) break;
        cout << i << endl;
    }

    cout << "Finalizo la cuenta" << endl;
    

    return 0;
}