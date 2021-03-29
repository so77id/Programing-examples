#include <iostream>
using namespace std;

int main() {
    int e1 = 5;
    int e2 = -10;
    int e3 = 3;

    // (5 + -10 - 3) * 5
    // (-5 - 3) * 5
    // -8 * 5 
    // -40
    int e4 = (e1 + e2 - e3) * e1; 

    // se resuelve primero las * y / de izquierda a derecha
    // Luego se resuelven las + y -
    // 5 + -10 - 3 * 5
    // 5 + -10 - 15
    // -5 - 15 
    // -20
    int e5 = e1 + e2 - e3 * e1;

    cout << "e4: " << e4 << endl;

    cout << "e5: " << e5 << endl;

    return 0;
}



