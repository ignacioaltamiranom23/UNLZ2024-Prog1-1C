#include <iostream>

using namespace std;

int main (){
  int anio, edad;

  cout << "Ingresar año de nacimiento: ";
  cin >> anio;

  edad = 2024 - anio;

  if(edad >= 18){
    cout << "La persona es mayor de edad.";
  }else{
    cout << "La persona es menor de edad.";
  }

  return 0;
}