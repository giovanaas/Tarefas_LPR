#include <iostream>
using namespace std;

void mediaPares()
{
    int quantidade, num, par = 0, somando = 0;
    cout << "Informe a quantidade de numeros que voce deseja: ";
    cin >> quantidade;

    int i = 0;

    while (i < quantidade)
    {
        cout << "Digite um numero: ";
        cin >> num;

        if (num % 2 == 0)
        {
            somando += num;
            par++;
        }

        i++;
    }
    if (par > 0)
    {

        double media = static_cast<double>(somando) / par;
        cout << "A media dos numeros eh: " << media << endl;
    }
    else
    {
        cout << "o programa faz a media apenas de numeros pares, e voce digitou apenas impares.";
    }
}

void somaMultiplos()
{
    int soma = 0;

    for (int i = 50; i <= 500; i++)
    {
        if (i % 2 != 0 && i % 3 == 0)
        {

            soma += i;
        }
    }
    cout << "A soma de todos os numeros impares multiplos de 3 que se encontram de 50 a 500 é: " << soma << endl;
}

void somaQuadrado()
{
    int numero;
    cout << "Digite um numero" << endl;
    cin >> numero;

    int quadrado = numero * numero;
    int soma = 0;

    while (quadrado > 0)
    {
        soma += quadrado % 10;
        quadrado /= 10;
    }

    cout << "A soma dos digitos do quadrado de " << numero << " eh: " << soma << endl;
}

int main()
{
    int escolha;
    cout << endl;
    cout << "Voce deve digitar o numero correspondente a sua escolha. Se desejar sair, digite 0." << endl;
    cout << endl;
    cout << "Menu: 1: media de numeros pares; 2- Soma dos impares multiplos de 3; 3-Soma dos digitos do quadrado. " << endl;
    cin >> escolha;

    switch (escolha)
    {

    case 0:
        cout << " Voce saiu do programa" << endl;
        return 0;

    case 1:
        mediaPares();
        break;

    case 2:
        somaMultiplos();
        break;

    case 3:
        somaQuadrado();
        break;

    default:
        break;
    }
}