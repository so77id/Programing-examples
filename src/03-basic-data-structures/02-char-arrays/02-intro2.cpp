#include <iostream> 
using namespace std;

int main() {
    char str[50];

    cout << "Ingrese una palabra" << endl;
    cin >> str;

    cout << "la palabra ingresada es:" << str << endl;
    cout << "recorriendo el array:" << endl;
    for(int i=0; i<50; i++) {
        cout << str[i] << " ";
    } cout << endl;

    return 0;
}