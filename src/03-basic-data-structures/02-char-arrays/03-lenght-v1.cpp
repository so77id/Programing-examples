#include<iostream>
using namespace std;

int main() {
    char str[50];

    cin >> str;

    // Forma 1 de calcularlo
    int len = 0;
    for(int i = 0; i < 50; i++) {
        if(str[i] == '\0') break;
        len++;
    }

    cout << "Tamaño: " << len << endl;

    // Forma 2 de calcularlo
    for(len = 0; len < 50 && str[len] != '\0'; len++);

    cout << "Tamaño: " << len << endl;
}