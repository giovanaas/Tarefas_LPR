#include <iostream>
#include <locale.h>
using namespace std;
  
int numero;
int reverso;

void reverso () {

    setlocale(LC_ALL, "pt_BR.UTF-8");  // ver como que faz isso aqui direito
    cout << "Digite um numero inteiro: ";
    cin >> numero;
}

int main()
{ 
    cout << "O reverso de " << numero << " eh: " << reverso;
} 

