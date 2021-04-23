#include<iostream>
using namespace std;


int main(int argc, char const *argv[]) {
  const float precio = 80.0;
  float cantidad, total, descuento;

  cin >> cantidad;

  if(cantidad >= 30) {
    descuento = 0.6;
  } else if (cantidad >= 20) {
    descuento = 0.8;
  } else if (cantidad >= 10) {
    descuento = 0.9;
  } else {
    descuento = 1.0;
  }
  total = (cantidad * precio * descuento);


  cout << "Precio final es: " << total << endl;

  return 0;
}
