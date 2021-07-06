#include<iostream>
#include<cmath>
using namespace std;

const int SIZE = 1000;


int main() {
  int size;
  int list[SIZE], s1[SIZE], s2[SIZE];

  cin >> size;

  for(int i = 0; i < SIZE; i++) {
    cin >> list[i];
  }

  for(int i = 0; i < size; i++) {
     int cright, cleft;
    cright = cleft = 0;

    for(int j = i + 1; j < size ; j++) {
        cright++;
        if(list[i] < list[j]) break;
    }
    for(int j = i-1; j >= 0; j--) {
        cleft++;
        if(list[i] < list[j]) break;
    }
      
    s1[i] = cright;
    s2[i] = cleft;
  }

  for(int i=0; i<size; i++) {
    cout << (i > 0 ? " " : "") << s1[i];
  } cout << endl;
  
  for(int i=0; i<size; i++) {
    cout << (i > 0 ? " " : "") << s2[i];
  } cout << endl;

  return 0;
}