#include <iostream>
#include <iomanip>

using namespace std;

int main()
{ 
int quantidade, num, par=0, somando=0;
//oi
cout << "Informe a quantidade de numeros que voce deseja: ";
cin >> quantidade;

int i=0;

while (i<quantidade) {
    cout << "Digite um numero: ";
    cin >> num;
    
    if (num%2==0) {
        somando += num;
        par ++;
    }
    
    i++;
    
} if (par > 0) {
    
    double media = static_cast<double> (somando) / par;
    cout << "A media dos numeros eh: " << media << endl;
    
} else {
    cout << "o programa faz a media apenas de numeros pares, e voce digitou apenas impares.";
}
  
}