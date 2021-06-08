#include<iostream>
#include<cstring>
using namespace std;

const int SIZE_1 = 10;
const int SIZE_2 = 11;

int main() {
    char str1[SIZE_1];
    char str2[SIZE_2];

    cin >> str1 >> str2;

    int res = strcmp(str1, str2);

    if(res == 0) cout << "Ambas cadenas son iguales" << endl;
    else if(res > 0) cout << "La primera cadena es mayor: " << res << endl;
    else  cout << "La segunda cadena es mayor: " << res << endl;
    
}