using System;


Console.WriteLine ("Escolha a classe do seu personagem: 1-guerreira; 2-mago; 3-arqueira. ");
int escolha= Convert.ToInt32 (Console.ReadLine ());

if (escolha==1) {
    Console.WriteLine ("Habilidades especiais de Guerreira: ataque pesado; defesa total.");
} else if (escolha==2) {
    Console.WriteLine ("Habilidades especiais de Mago: bola de fogo; escudo de gelo.");
} else {
    Console.WriteLine ("Habilidades especiais de Arqueira: flecha precisa; disparo triplo.");
}
