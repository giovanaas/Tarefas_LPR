using System;
class Program

{
	static void Main()
	{
		Random numAleatorio = new Random();
		int valorInteiro = numAleatorio.Next(1,100);
		int palpite, tentativas=0;
		Console.WriteLine ("Voce deve adivinhar um numero gerado aleatoriamente de 1 a 100!");

		do  {

			Console.WWriteLine ("Digite o seu palpite: {palpite} ");
			palpite= Convert.ToInt32 (Console.ReadLine());

			tentativas++;

			if (palpite < valorInteiro) {
				Console.WriteLine ("Palpite muito baixo");
			}
			else if (palpite > valorInteiro) {
			Console.WriteLine ("Palpite muito alto");

			} else {
				Console.WriteLine ("Parabens!! Voce acertou o numero aleatorio em {tentativas} tentativas!!!");
			}
		}
		while (palpite != valorInteiro);
		Console.WriteLine ("Obrigada por jogar");

	}
}