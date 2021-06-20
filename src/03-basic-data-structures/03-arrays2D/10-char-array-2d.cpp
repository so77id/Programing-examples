#include<iostream>
#include<cstring>
using namespace std;

const int ARRAY_SIZE = 3;
const int STRING_SIZE = 10;

int main()
{
    char word_list[ARRAY_SIZE][STRING_SIZE];

    memset(word_list, '\0', ARRAY_SIZE*STRING_SIZE);
    // esto es lo mismo que esto
    // for(int i = 0; i < ARRAY_SIZE; i++) {
    //     memset(word_list[i], '\0', STRING_SIZE);
    // }
    
    cout << "Ingrese cada palabra separada por un enter:" << endl;
    for(int i = 0; i < ARRAY_SIZE; i++) {
        cin >> word_list[i];
    }
    
    int max_len = 0;
    int max_len_i = -1;

    for(int i=0; i<ARRAY_SIZE; i++) {
        if(strlen(word_list[i]) > max_len) {
            max_len = strlen(word_list[i]);
            max_len_i = i;
        }
    }

    cout << "La palabra mas larga es: " << word_list[max_len_i] 
         << " ubicada en el indice: " << max_len_i << endl;
    
    return 0;
}
