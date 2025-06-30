using System;
using System.Collections.Generic;
class Program
{
    static void main()
    {
        List<string> nomesAleatorios = new();

        Console.WriteLine("Quantos nomes você deseja ordenar?");
        int quantidade = int.Parse(Console.ReadLine());

        for (int i = 0; i <= quantidade; i++)
        {
            Console.WriteLine($" {i}º nome: ");
            string nome = Console.ReadLine();
        }
        

    }
}