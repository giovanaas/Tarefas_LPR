#include <iostream>
#include <limits>

using namespace std;

int revertamento(int numero)
{
    int reverse = 0;

    while (numero != 0)
    {
        int digito = numero % 10;
        reverse = reverse * 10 + digito;
        numero /= 10;
    }

    return reverse;
}

int main()
{
    int numero;
    string entrada;

    while (true)
    {
        cout << "Digite um numero INTEIRO: ";

        if (cin >> numero)
        {
            int resultado = revertamento(numero);
            cout << "O reverso de " << numero << " eh: " << resultado << "." << endl;
            cout << " " << endl;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Por favor, digite um numero valido! O numero deve ser ser INTEIRO!!" << endl;
            cout << " " << endl;
        }
    }
    return 0;
}