#include<iostream>
#include<cstring>
using namespace std;

const int SIZE = 50;

int main() {

    char line[SIZE];
    memset(line, '\0', SIZE);
    cin.getline(line, SIZE);
    
    int count = 0;
    int a = 0; // 0 o 1
    int e = 0; // 0 o 1
    int i = 0; // 0 o 1
    int o = 0; // 0 o 1
    int u = 0; // 0 o 1

    // hola // strlen() -> 4
    // 0 < 4 + 1 -> 0: h, 1: o, 2: l, 3: a
    // \0 --> 4
    for(int j = 0; j < strlen(line)+1; j++) {
        if(line[j] == ' ' || line[j] == '\0') {
            //acaba la palabra
            // aca debemos verificar si la palabra anterior tenia 4 vocales diferentes
            if((a + e + i + o + u) >= 4) {
                count++;
            }
            a = e = i = o = u = 0;
        }
        if(line[j] == 'a' || line[j] == 'A') a = 1;
        if(line[j] == 'e' || line[j] == 'E') e = 1;
        if(line[j] == 'i' || line[j] == 'I') i = 1;
        if(line[j] == 'o' || line[j] == 'O') o = 1;
        if(line[j] == 'u' || line[j] == 'U') u = 1;
    }

    
    cout << "La cantidad de palabras con al menos 4 vocales son: " << count << endl;
    

    return 0;
}