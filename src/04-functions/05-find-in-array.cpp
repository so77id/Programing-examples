#include<iostream>
using namespace std;

const int SIZE = 5;

bool find_in_array(float [], int,  float);

int main() {
    float array[SIZE];
    float to_find;
    cout << "Ingrese los N:" << SIZE << " numeros del arreglo" << endl;
    for(int i = 0; i<SIZE; i++) {
        cin >> array[i];
    }

    cout << " Ingrese el numero a buscar: " << endl;
    cin >> to_find;

    if(find_in_array(array, SIZE, to_find)) {
        cout << "El numero esta en el arreglo" << endl;
    } else {
        cout << "El nunero no esta en el arreglo" << endl;
    }

    return 0;
}

bool find_in_array(float array[], int size, float to_find) {
    for(int i = 0; i < size; i++) {
        if(array[i] == to_find) {
            return true;
        }
    }

    return false;
}

