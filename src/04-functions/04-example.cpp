#include<iostream>
using namespace std;

int GLOBAL = 4;

int sum3(int, int, int);

int main(){
    int a, b;
    cin >> a >> b;

    cout << sum3(a, b, GLOBAL);

    return 0;
}

int sum3(int p1, int p2, int p3) {
    return p1+p2+p3;
}
