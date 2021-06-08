#include<iostream>
using namespace std;

const int SIZE = 5;

int main() {
    float elements[SIZE];

    for(int i=0; i<SIZE; i++){
        cin >> elements[i];
    }

    int max_i = 0;
    
    for(int i = 1; i < 5; i++) {
        if(elements[max_i] < elements[i]){
            max_i = i;
        }
    }
    
    cout << "elemento maximo es: " << elements[max_i] << endl;
    cout << "elemento maximo esta en el indice: " <<  max_i << endl;

    return 0;
}