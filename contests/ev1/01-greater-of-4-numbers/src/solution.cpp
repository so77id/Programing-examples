#include<iostream>
using namespace std;

int main() {
  int a,b,c;

  cin >> a >> b;

  if(a > b) c = a;
  else c = b;

  cin >> a >> b;

  if(a > b)
    if(c > a) cout << c << endl;
    else cout << a << endl;
  else
    if(c > b) cout << c << endl;
    else cout << b << endl;

  return 0;
}
