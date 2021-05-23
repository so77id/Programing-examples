#include<iostream>
using namespace std;

int main() {
  int max = 0, day = 0, n;

  cin >> n;

  for(int i = 0; n != -1; i++) {
    if(n >= max) {
      max = n;
      day = i;
    }

    cin >> n;
  }

  cout << max << " " << day << endl;

  return 0;
}
