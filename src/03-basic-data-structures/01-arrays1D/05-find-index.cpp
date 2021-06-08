#include<iostream>
using namespace std;

const int SIZE = 5;

int main() {
    float elements[SIZE];
    int to_find, index = -1;

    for(int i=0; i<SIZE; i++){
        cin >> elements[i];
    }

    cin >> to_find;

    for(int i = 0; i < 5; i++) {
        if(to_find == elements[i]) {
            index = i;
            break;
        }
    }
    
    if(index != -1) {
        cout << "Elemento encontrado en el indice: " << index << endl;
    } else {
        cout << "Elemnto no encontrado" << endl;
    }
    

    return 0;
}