#include<iostream>
using namespace std;

const int SIZE_1 = 10;
const int SIZE_2 = 11;

int main() {
    char str1[SIZE_1];
    char str2[SIZE_2];

    cin >> str1 >> str2;

    int res = 0;
    int i = 0;
    while(i < SIZE_1 && i < SIZE_2 && str1[i] != '\0' && str2[i] != '\0') {
        res = str1[i] - str2[i];
        if(res != 0) break;
        i++;
    }

    if(i >= SIZE_1 || i >= SIZE_2) {
        if(i >= SIZE_1 && i >= SIZE_2) res = 0;
        else if(i >= SIZE_1 && i < SIZE_2) res = -str2[i];
        else res = str1[i];
    }

    if(str1[i] == '\0' || str2[i] == '\0') {
        if(str1[i] == '\0' && str2[i] == '\0') res = 0;
        else if(str1[i] == '\0' && str2[i] != '\0') res = -str2[i];
        else res = str1[i];
    }

    if(res == 0) cout << "Ambas cadenas son iguales" << endl;
    else if(res > 0) cout << "La primera cadena es mayor: " << res << endl;
    else  cout << "La segunda cadena es mayor: " << res << endl;
    
}