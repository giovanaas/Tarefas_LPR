using System;
using System.Collections.Generic;
class Program
{
    static void main()
    {

        Console.WriteLine("Quantos nomes você deseja ordenar?");
        int quantidade = int.Parse(Console.ReadLine());

        for (int i = 1; i <= quantidade; i++)
        {
            List<string> nomesAleatorios = new List<string>();

            Console.WriteLine($"Digite o {i}º nome: ");
            string nome = Console.ReadLine();
            nomesAleatorios.Add(nome);

        }
        // enquanto a liosta tiver nomes
        // contador de tamanhos=1
        // para i nomes
        // se o tamanho do nome i= contador de tamanho
        //mostro nome i e o tira da lista

        Console.WriteLine($"")


    }
}