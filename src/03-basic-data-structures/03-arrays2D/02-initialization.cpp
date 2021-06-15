#include<iostream>
using namespace std;

const int SIZE1 = 3;
const int SIZE2 = 4;


int main() {
    int matrix[SIZE1][SIZE2];
    cout << "Ingrese los numeros de la matrix" << endl;
    for(int i = 0; i < SIZE1; i++) {
        for(int j = 0; j < SIZE2; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Los numeros de la matrix son:" << endl;
    for(int i = 0; i < SIZE1; i++) {
        for(int j = 0; j < SIZE2; j++) {
            cout << matrix[i][j] << " ";
        } cout << endl;
    }

    return 0;
}