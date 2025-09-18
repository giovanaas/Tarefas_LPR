using System;

namespace aula2
{
  class Program
  {
    static void Main(string[] args)
    {
      int A, B, C, D;

      Console.WriteLine("Digite o valor de A (número INTEIRO): ");
      A = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine("Digite o valor de B (número INTEIRO): ");
      B = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine("Digite o valor de C (número INTEIRO): ");
      C = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine("Digite o valor de D (número INTEIRO): ");
      D = Convert.ToInt32(Console.ReadLine());

      int total = A * B - C * D;

      Console.WriteLine($"A diferença do produto de A e B pelo produto de C e D é: {total}");

    }
  }
}