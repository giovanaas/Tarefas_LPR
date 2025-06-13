#include <iostream>
#include <vector>
using namespace std;

struct Livro {

    string titulo, autor;
    int anoPublicacao, numeroPaginas;
    double preco;

};

int main () {



    for (int i = 1; i < 4; i++) {

        cout << "Insira os dados do livros:" << endl;
        cout << "Autor livro " << i << ": " << endl;
        cout << "Ano de publicacao livro " << i << ": " << endl;
        cout << "Numero de paginas livro " << i << ": " << endl;
        cout << "Preco livro " << i << ": " << endl;

    }
    

}