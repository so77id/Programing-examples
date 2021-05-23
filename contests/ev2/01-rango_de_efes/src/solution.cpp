#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int x_i, x_j;

  cin >> x_i >> x_j;

  for(int i=x_i; i<=x_j; i++) {
    int result = i + pow(i-1, 2);
    cout << result << endl;
  }

  return 0;
}
