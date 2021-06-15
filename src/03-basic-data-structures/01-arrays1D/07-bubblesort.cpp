#include <iostream>

using namespace std;

const int SIZE = 10;

int main() {
    int list[SIZE];

    for(int i = 0; i < SIZE; i++) {
        cin >> list[i];
    }

    //bubblesort
    for(int k = SIZE; k >= 0; k-- ){
        for(int i = 0; i < k-1; i++) {
            if(list[i] < list[i+1]) {
                //swap
                int aux = list[i];
                list[i] = list[i+1];
                list[i+1] = aux;
            }
        }
    }
    
    for(int i = 0; i < SIZE; i++) {
        cout << list[i] << " ";
    } cout << endl;

    return 0;
}