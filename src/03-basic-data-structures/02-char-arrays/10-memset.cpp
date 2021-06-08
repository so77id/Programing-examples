#include<iostream>
#include<cstring>
using namespace std;

const int SIZE = 50;

int main() {

    char str1[SIZE];
    memset(str1, '\0', SIZE);
    cout << str1 << endl;

    memset(str1, 'A', 4);
    cout << str1 << endl;

    memset(str1, 'B', 8);
    cout << str1 << endl;
    return 0;
}