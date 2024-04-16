#include <iostream>

using namespace std;

int main (){
  int num1, num2, operacion, resultado;

  cout << "Ingresar dos números: ";
  cin >> num1 >> num2;

  cout << "Seleccionar una operación: " << endl;
  cout << "1.Suma" << endl;
  cout << "2.Resta" << endl;
  cout << "3.Multiplicación" << endl;
  cout << "4.División" << endl;
  cin >> operacion;
  
  switch (operacion)
  {
  case 1:
    resultado = num1 + num2;
    cout << num1 << " + " << num2 << " = " << resultado;
    break;
  case 2:
    resultado = num1 - num2;
    cout << num1 << " - " << num2 << " = " << resultado;
    break;
  case 3:
    resultado = num1 * num2;
    cout << num1 << " * " << num2 << " = " << resultado;
    break;
  case 4:
    resultado = num1 / num2;
    cout << num1 << " / " << num2 << " = " << resultado;
    break;
  default:
    break;
  }

  return 0;
}