#include <iostream>

using namespace std;

int main ()
{
  int area;
  int largo;
  int ancho;
  int perimetro;

  cout << "Ingresar largo" << endl;
  cin >> largo;
  cout << "Ingresar ancho" << endl;
  cin >> ancho;

  area = largo * ancho;
  perimetro = (largo * 2) + (ancho * 2);

  cout << "El área del rectángulo es: " << area << endl;
  cout << "El perímetro del rectángulo es: " << perimetro << endl;

  return 0;
}