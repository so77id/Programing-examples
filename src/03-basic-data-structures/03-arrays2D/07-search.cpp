#include<iostream>
using namespace std;

const int SIZE = 3;

int main()
{
    int matrix[SIZE][SIZE];
    int to_find;

    cout << "Ingrese la matrix:" << endl;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Ingrese el numero a buscar: " << endl;
    cin >> to_find;

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(matrix[i][j] == to_find) {
                cout << "El numero encontrado esta en i: "
                     << i << " j: "<< j << endl;
            }
        }
    }

    return 0;
}
