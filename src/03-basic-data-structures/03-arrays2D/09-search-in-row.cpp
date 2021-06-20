#include<iostream>
#include<limits>
using namespace std;

const int SIZE = 3;

int main()
{
    int matrix[SIZE][SIZE];
    
    cout << "Ingrese la matrix:" << endl;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }
    
    for(int i = 0; i < SIZE; i++) {
        int min = std::numeric_limits<int>::max();
        int min_j;

        for(int j = 0; j < SIZE; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
                min_j = j;
            }
        }
        cout << "El numero minimo de la matriz es ubicado en la fila i: "
             << i << " es: " << min << " Ubicado en j: " << min_j << endl;
    }

    
    return 0;
}
