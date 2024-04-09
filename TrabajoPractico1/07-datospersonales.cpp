
#include <iostream>

using namespace std;

int main ()
{
  string nombre;
  string apellido;
  int edad;
  string direccion;
  string localidad;
  string provincia;
  string pais;
  int telefono;

  cout << "Ingrese su nombre: ";
  getline(cin,nombre);
  cout << "Ingrese su apellido: ";
  getline(cin,apellido);
  cout << "Ingrese su edad: ";
  cin >> edad;
  cin.ignore();
  cout << "Ingrese su dirección: ";
  getline(cin,direccion);
  cout << "Ingrese su localidad: ";
  getline(cin,localidad);
  cout << "Ingrese su provincia: ";
  getline(cin,provincia);
  cout << "Ingrese su país: ";
  getline(cin,pais);
  cout << "Ingrese su teléfono: ";
  cin >> telefono;

  cout << endl;
  cout << "Nombre: " << nombre << endl;
  cout << "Apellido: " << apellido << endl;
  cout << "Edad: " << edad << endl;
  cout << "Dirección: " << direccion << endl;
  cout << "Localidad: " << localidad << endl;
  cout << "Provincia: " << provincia << endl;
  cout << "País: " << pais << endl;
  cout << "Teléfono: " << telefono << endl;

  return 0;
}