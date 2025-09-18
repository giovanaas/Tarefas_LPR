using System;

namespace aula2
{
  class Program
  {
    static void Main(string[] args)
    {
      int codigo1, pecas1, codigo2, pecas2;
      float preco1, preco2, total;

      Console.WriteLine("Informe o código da primeira peça: ");
      codigo1 = Convert.ToInt32(Console.ReadLine());

      Console.WriteLine("Informe a quantidade da primeira peça: ");
      pecas1 = Convert.ToInt32(Console.ReadLine());

      Console.WriteLine("Informe o preço unitario da primeira peça: ");
      preco1 = float.Parse(Console.ReadLine());

      Console.WriteLine("Informe o código da segunda peça: ");
      codigo2 = Convert.ToInt32(Console.ReadLine());

      Console.WriteLine("Informe a quantidade da segunda peça: ");
      pecas2 = Convert.ToInt32(Console.ReadLine());

      Console.WriteLine("Informe o preço unitario da segunda peça: ");
      preco2 = float.Parse(Console.ReadLine());

      total = (pecas1 * preco1) + (pecas2 * preco2);

      Console.WriteLine($"O valor a ser pago é: R$ {total}");
    }
  }
}
