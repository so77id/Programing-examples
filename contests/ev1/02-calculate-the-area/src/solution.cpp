#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int type;
  float area;

  cin >> type;

  if(type == 0) {
    //triangle
    float base, height;
    cin >> base >> height;

    area = (base * height)/2;
  } else if(type == 1) {
    // circle
    const float pi = 3.14;
    float radio;
    cin >> radio;

    area = pi * pow(radio, 2);
  } else if(type == 2) {
    // square
    float side;
    cin >> side;

    area = side * side;
  }

  cout << area << endl;

  return 0;
}
