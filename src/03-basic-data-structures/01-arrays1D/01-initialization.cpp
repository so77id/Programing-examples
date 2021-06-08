#include<iostream>
using namespace std;

int main() {
    float const_list[5] = {4.0, 0.0, -1.8, 4.9, 1.1};

    for(int i = 0; i < 5; i++) {
        cout << const_list[i] << endl;
    }

    int dinamyc_list[5];

    for(int i = 0; i < 5; i++) {
        cin >> dinamyc_list[i];
    }

    for(int i = 0; i < 5; i++) {
        cout << dinamyc_list[i] << endl;
    }

    return 0;
}