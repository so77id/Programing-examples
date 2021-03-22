#include <iostream>
using namespace std;


int main() {
    char c1 = 'a';
    char c2 = 126;
    
    cout << c1 << " " << c2 << endl;

    int i1 = 122;

    cout << i1 << " " << (char)i1 << endl;
    cout << (int)c1 << " " << (int)c2 << endl;

    return 0;
}