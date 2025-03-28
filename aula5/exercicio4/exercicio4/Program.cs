Console.WriteLine ("Digite um número");
 
int numero= Convert.ToInt32 (Console.ReadLine ());
int quadrado = numero*numero;
int soma = 0;

string coisa = quadrado.ToString();

foreach (char Num in coisa)
{
    soma += Num-48;
} 
Console.WriteLine ($"a soma dos dígitos do quadrado desse número é {soma}");