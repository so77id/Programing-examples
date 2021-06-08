#include<iostream>
using namespace std;

int main() {
    float elements[5] = {1,2,3,5,6};
    int to_find;
    bool finded = false;

    cin >> to_find;

    for(int i = 0; i < 5; i++) {
        if(to_find == elements[i]) {
            finded = true;
            break;
        }
    }
    
    if(finded) cout << "Elemento encontrado" << endl;
    else cout << "Elemento no encontrado" << endl;
    

    return 0;
}