#include<iostream>
#include<cstring>
using namespace std;

const int SIZE = 50;

int main() {

    char str1[SIZE];
    char str2[SIZE];

    cin >> str1;
    cin >> str2;

    strcat(str1, str2);

    cout << str1 << endl;

    strcat(str1, " strcat");

    cout << str1 << endl;

    return 0;
}