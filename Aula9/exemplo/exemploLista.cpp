#include <iostream>
#include <list>
using namespace std;

int main () {

    //cria lista
    list <int> numeros = {1, 2, 3, 4, 5};

    //adiciona o 4 no final
    numeros.push_back (4);

    //adiciona o 7 depois da posição 2
    auto it= numeros.begin();
    advance (it, 3);
    numeros.insert (it,7);

    //verifica se tem 8
    it= find( numeros.begin(), numeros.end(), 8);
    bool contem8 = (it != numeros.end());
    cout << "Contem o numero 8 na lista?" << contem8 << endl;

    //verifica quantos  umeros são maiores que 4



 /*auto it = find(numeros.begin(), numeros.end(), 8);
 bool contem = (it != numeros.end());
 if (contem) cout << "A lista contem o numero 8." << endl;
 else cout << "A lista não contém o numero 8";  */

}