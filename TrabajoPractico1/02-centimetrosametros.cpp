#include <iostream>

using namespace std;

int main ()
{
  int centimetros;
  double mt;

  cout << "Ingresar centímetros" << endl;
  cin >> centimetros;

  mt = static_cast<double>(centimetros) / 100;

  cout << centimetros << "cms son " << mt << " metros." << endl;

  return 0;
}