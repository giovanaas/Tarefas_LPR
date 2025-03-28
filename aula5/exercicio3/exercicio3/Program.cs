using System;

class Program
{
    static void Main()
{ 
    int soma = 0;

    for (int i=50; i<= 500; i++) {
        if (i % 2 != 0 && i % 3 == 0 ) {

       soma += i;
        }
    }
Console.WriteLine ($"A soma de todos os números ímpres múltiplos de 3 que se encontram de 50 a 500 é: {soma} ");

    }
}
