#include <iostream>

using namespace std;

int main (){
  char letra;

  cout << "Ingresar una letra: ";
  cin >> letra;

  switch (letra)
  {
  case 'a':
    cout << "Es vocal.";
    break;
  case 'e':
    cout << "Es vocal.";
    break;
  case 'i':
    cout << "Es vocal.";
    break;
  case 'o':
    cout << "Es vocal.";
    break;
  case 'u':
    cout << "Es vocal.";
    break;
  default:
    cout << "Es consonante.";
    break;
  }

  return 0;
}