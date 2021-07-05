#include<iostream>
using namespace std;

const int SIZE = 5;

void sort(int[], int);

int main() {
    int array[SIZE];
    
    cout << "Ingrese los N:" << SIZE << " numeros del arreglo" << endl;
    for(int i = 0; i<SIZE; i++) {
        cin >> array[i];
    }

    sort(array, SIZE);

    for(int i = 0; i<SIZE; i++) {
        cout << array[i] << " ";
    } cout << endl;
    

    return 0;
}


void sort(int arr[], int size) {
    for(int k = size; k >= 0; k-- ){
        for(int i = 0; i < k-1; i++) {
            if(arr[i] > arr[i+1]) {
                //swap
                int aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
            }
        }
    }
}