#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int ax,ay,bx,by,cx,cy;
  cin >> ax >> ay;
  cin >> bx >> by;
  cin >> cx >> cy;

  float d1, d2, d3;
  // d1 dist(a, b)
  // d2 dist(b, c)
  // d3 dist(a, c)

  d1 = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
  d2 = sqrt(pow(cx - bx, 2) + pow(cy - by, 2));
  d3 = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));

  if(d1 == d2 && d2 == d3){
    cout << "equilatero" << endl;
  } else if(d1 == d2 && d2 != d3  || d2 == d3 && d3 != d1  || d1 == d3 && d2 != d3) {
    cout << "isoseles" << endl;
  } else {
    cout << "escaleno" << endl;
  }


  return 0;
}
