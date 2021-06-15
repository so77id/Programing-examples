#include<iostream>
using namespace std;

const int SIZE1 = 3;
const int SIZE2 = 4;


int main() {
    int matrix[SIZE1][SIZE2] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for(int i = 0; i < SIZE1; i++) {
        for(int j = 0; j < SIZE2; j++) {
            cout << matrix[i][j] << " ";
        } cout << endl;
    }

    return 0;
}