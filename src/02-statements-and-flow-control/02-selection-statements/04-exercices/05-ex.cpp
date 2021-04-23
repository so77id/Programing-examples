#include<iostream>
#include<cmath>
using namespace std;

int main() {
    char space;
    float area, radio;

    //space -> c,r,h
    cin >> space >> radio;

    if(space == 'c') {
        const float pi = 3.14;
        area = pi * pow(radio,2);
    } else if (space == 'r') {
        const float pi = 5.23;
        area = pi * pow(radio,2);
    } else if (space == 'h') {
        const float pi = 0.98;
        area = pi * pow(radio,2);
    } else {
        area = 0;
    }

    cout << area << endl;

    return 0;
}