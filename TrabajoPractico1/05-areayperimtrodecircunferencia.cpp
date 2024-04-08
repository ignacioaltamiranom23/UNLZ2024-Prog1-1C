#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  const double PI = 3.141592;
  double radio;
  double area;
  double perimetro;
 
  cout << "Ingresar radio" << endl;
  cin >> radio;

  area = PI * pow(radio,2);
  perimetro = PI * radio * 2;

  cout << "El área de la circunferencia es " << area << endl;
  cout << "El perímetro de la circunferencia es " << perimetro << endl;

  return 0;
}