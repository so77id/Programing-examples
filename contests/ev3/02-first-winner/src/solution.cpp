#include<iostream>
#include<cmath>
using namespace std;

const int SIZE = 10000;


int main() {
  char word[SIZE];
  char init;
  bool ans = true;

  cin >> word;
  init = word[0];

  while(cin >> word) {
    if(word[0] != init) {
      ans = false;
      break;
    }
  }

  if(ans) cout << "Verdadero" << endl;
  else cout << "Falso" << endl;


  return 0;
}