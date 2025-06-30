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

        // cont=1
        // enquanto a lista != 0
        // para nomes em lista
        // se nome.tamanho == cont
        //mostro nome i e o tira da lista
        // cont++
        // tem que verificar qual o nome com maior tamanho, ai quando chega nele, o contador tem que zerar dnv pra recomeçar a contar na linha de baixo
        
        Console.WriteLine($"")


    }
}