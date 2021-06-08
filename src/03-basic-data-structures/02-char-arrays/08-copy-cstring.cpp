#include<iostream>
#include<cstring>
using namespace std;

const int SIZE_1 = 8;
const int SIZE_2 = 5;

int main() {

    char str1[SIZE_1];
    char str2[SIZE_2];

    cin >> str1;

    strcpy(str2, str1);

    cout << str2 << endl;

    return 0;
}