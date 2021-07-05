#include<iostream>
using namespace std;

int volumen(int long_, int height = 3, int width = 3) {
    return long_ * height * width;
}
int main() {
    cout << volumen(1,2,4) << endl;
    cout << volumen(2) << endl;
    cout << volumen(1, 2) << endl;

    return 0;
}

