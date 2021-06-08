#include<iostream>
using namespace std;

const int SIZE_1 = 8;
const int SIZE_2 = 5;

int main() {

    char str1[SIZE_1];
    char str2[SIZE_2];

    cin >> str1;
    int i;
    for(i = 0; i < SIZE_1 && i < SIZE_2; i++) {
        str2[i] = str1[i];
        if(str2[i] == '\0') break;
    }

    if(i == SIZE_2) str2[i-1] = '\0';

    cout << str2 << endl;

    return 0;
}