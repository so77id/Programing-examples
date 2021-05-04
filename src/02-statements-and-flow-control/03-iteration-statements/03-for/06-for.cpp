#include<iostream>
using namespace std;

int main() {
    int n, r;
    
    cin >> n;
    for(r = 0; n > 0; n/=10){ 
        r = r*10 + n%10;
    }

    cout << r << endl;

    return 0;
}

