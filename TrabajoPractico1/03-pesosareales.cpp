#include <iostream>

using namespace std;
int main ()
{
  int pesos;
  int cot_real = 171;
  double reales;

  cout << "Ingresar pesos" << endl;
  cin >> pesos;

  reales = static_cast<double>(pesos) / cot_real;

  cout << pesos << " pesos son " << reales << " reales." << endl;

  return 0;
}