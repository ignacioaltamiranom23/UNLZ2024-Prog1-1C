#include <iostream>

using namespace std;

int main (){
  int num1, num2, num3;
  cout << "Ingresar 3 números:";
  cin >> num1 >> num2 >> num3;

  if (num1 > num2) {
    if (num1 > num3) {
      cout << "El número mayor es: " << num1;
    } else {
      cout << "El número mayor es: " << num3;
    }
  } else {
    if (num2 > num3) {
      cout << "El número mayor es: " << num2;
    } else {
      cout << "El número mayor es: " << num3;
    }
  }
  return 0;
}