#include <iostream>
using namespace std;

int main() {
    float e1 = 5.0;
    float e2 = -10.0;
    float e3 = 3.0;

    e1 += e2;
    cout << "e1: " << e1 << endl;

    e2 -= e3;
    cout << "e2: " << e2 << endl;

    e3 *= e1 + e2;
    cout << "e3: " << e3 << endl;

    e1 /= e3;
    cout << "e1: " << e1 << endl;

    return 0;
}



