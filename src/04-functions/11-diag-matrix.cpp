#include<iostream>
using namespace std;

const int SIZE1=5;
const int SIZE2=5;

int diag_matrix(int [][SIZE2], int, int);

int main() {
    int m1[SIZE1][SIZE2];

    cout << "Ingrese los numeros de la matrix: " << endl;
    for(int i = 0; i< SIZE1; i++) {
        for(int j = 0; j < SIZE2; j++) {
            cin >> m1[i][j];
        }
    }

    cout << diag_matrix(m1, SIZE1, SIZE2) << endl;

    return 0;
}

int diag_matrix(int m[][SIZE2], int size1, int size2) {
    int sum = 0;
    for(int i = 0; i<size1 && i<size2; i++){
        sum += m[i][i];
    }
    return sum;
}