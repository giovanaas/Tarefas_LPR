#include <iostream>
using namespace std;

int main () {

    int distancia[4][4] = {
        {0, 524, 521, 882},
        {524, 0, 434, 586},
        {521, 434, 0, 429},
        {882, 586, 429, 0}
    };
 
   int origem, destino, npme;

    cout << "As cidades disponíveis são: 1- Vitoria; 2- BH; 3- Rio de Janeiro; 4-Sao Paulo" << endl;
    cout << "Por favor, informe o numero da cidade de origem e da cidade de destino: ";
    cin >>  origem >> destino;

    
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++)
     cout << "A ditância entre " << origem << "e " << destino << "eh: " << distancia [linha] [coluna];
}
    }
     
   