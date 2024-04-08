#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  int lado;
  double area;
  double perimetro;

  cout << "Ingresar lado" << endl;
  cin >> lado;

  area = (pow(lado,2) * sqrt(3)) / 4;
  perimetro = lado * 3;

  cout << "El área del triángulo es " << area << endl;
  cout << "El perímetro del triángulo es " << perimetro << endl;

  return 0;
}