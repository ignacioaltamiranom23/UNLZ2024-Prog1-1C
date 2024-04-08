#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  const int VELOCIDAD_SONIDO = 343;
  int segundos;
  int distancia;
 
  cout << "Ingresar segundos transcurridos" << endl;
  cin >> segundos;

  distancia = segundos * VELOCIDAD_SONIDO;

  cout << "La distancia es " << distancia << " metros." << endl;

  return 0;
}