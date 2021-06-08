#include<iostream>
using namespace std;

const int SIZE = 5;

int main() {
    float elements[SIZE];

    for(int i=0; i<SIZE; i++){
        cin >> elements[i];
    }

    int max = elements[0];
    
    for(int i = 1; i < 5; i++) {
        if(max < elements[i]){
            max = elements[i];
        }
    }
    
    cout << "elemento maximo: " <<  max << endl;

    return 0;
}