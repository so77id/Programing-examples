#include<iostream>
#include<limits>
using namespace std;

const int SIZE = 3;

int main()
{
    int matrix[SIZE][SIZE];
    int max = std::numeric_limits<int>::min();
    int max_i, max_j;

    cout << "Ingrese la matrix:" << endl;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }
    
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(matrix[i][j] > max) {
                max_i = i;
                max_j = j;
                max = matrix[i][j];
            }
        }
    }

    cout << "El numero maximo de la matriz es: " 
         << max << " Ubicado en i: " << max_i << " j: " << max_j << endl;

    return 0;
}
