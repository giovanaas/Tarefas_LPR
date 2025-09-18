#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese_Brazil.1252");
  double raio;
  double pi = 3.14159;
  cout << "Digite o valor do raio: ";
  cin >> raio;

  double area = pi * raio * raio;

  cout << fixed << setprecision(4);
  cout << "A área do círculo é:" << area << ".";
}