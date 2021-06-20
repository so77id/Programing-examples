#include<iostream>
#include<cstring>
using namespace std;

const int ARRAY_SIZE = 5;
const int STRING_SIZE = 10;

int main()
{
    char word_list[ARRAY_SIZE][STRING_SIZE];

    memset(word_list, '\0', ARRAY_SIZE*STRING_SIZE);
    
    cout << "Ingrese cada palabra separada por un enter:" << endl;
    for(int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Ingresar palabra: ";
        cin >> word_list[i];
    }
    
    //bublesort
    for(int k = ARRAY_SIZE; k >= 0; k--) {
        for(int i = 0; i < k-1; i++) {
            if(strcmp(word_list[i], word_list[i+1]) > 0 ) {
                char aux[STRING_SIZE];
                strcpy(aux, word_list[i]);
                strcpy(word_list[i], word_list[i+1]);
                strcpy(word_list[i+1], aux);
            }
        }
    }


    cout << "Las palabras ordenadas: " << endl;
    for(int i = 0; i < ARRAY_SIZE; i++) {
        cout << word_list[i] << endl; 
    }

    return 0;
}
