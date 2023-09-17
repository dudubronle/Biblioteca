#include <string>
#include <vector>
#include <iostream>
#include "biblioteca.hpp"

using namespace std;

int main()
{
    string titulo;
    int ano;
    int qtd;
    string autor;
    
  
    Livros fixos[30];

    // Livro 1
    fixos[0].titulo = "O Senhor dos Anéis";
    fixos[0].ano = 1954;
    fixos[0].qtd = 10;
    fixos[0].autor = "J.R.R. Tolkien";

    // Livro 2
    fixos[1].titulo = "1984";
    fixos[1].ano = 1949;
    fixos[1].qtd = 5;
    fixos[1].autor = "George Orwell";

    // Livro 3
    fixos[2].titulo = "Dom Quixote";
    fixos[2].ano = 1605;
    fixos[2].qtd = 8;
    fixos[2].autor = "Miguel de Cervantes";

    // Livro 4
    fixos[3].titulo = "Moby Dick";
    fixos[3].ano = 1851;
    fixos[3].qtd = 6;
    fixos[3].autor = "Herman Melville";

    // Livro 5
    fixos[4].titulo = "Cem Anos de Solidão";
    fixos[4].ano = 1967;
    fixos[4].qtd = 7;
    fixos[4].autor = "Gabriel García Márquez";

    // Livro 6
    fixos[5].titulo = "A Revolução dos Bichos";
    fixos[5].ano = 1945;
    fixos[5].qtd = 9;
    fixos[5].autor = "George Orwell";

    // Livro 7
    fixos[6].titulo = "Ulisses";
    fixos[6].ano = 1922;
    fixos[6].qtd = 3;
    fixos[6].autor = "James Joyce";

    // Livro 8
    fixos[7].titulo = "O Pequeno Príncipe";
    fixos[7].ano = 1943;
    fixos[7].qtd = 12;
    fixos[7].autor = "Antoine de Saint-Exupéry";

    // Livro 9
    fixos[8].titulo = "Grande Sertão: Veredas";
    fixos[8].ano = 1956;
    fixos[8].qtd = 6;
    fixos[8].autor = "João Guimarães Rosa";

    // Livro 10
    fixos[9].titulo = "O Alquimista";
    fixos[9].ano = 1988;
    fixos[9].qtd = 8;
    fixos[9].autor = "Paulo Coelho";

    // Livro 11
    fixos[10].titulo = "A Metamorfose";
    fixos[10].ano = 1915;
    fixos[10].qtd = 4;
    fixos[10].autor = "Franz Kafka";

    // Livro 12
    fixos[11].titulo = "Crime e Castigo";
    fixos[11].ano = 1866;
    fixos[11].qtd = 10;
    fixos[11].autor = "Fiódor Dostoiévski";

    // Livro 13
    fixos[12].titulo = "A Odisséia";
    fixos[12].ano = -725;
    fixos[12].qtd = 5;
    fixos[12].autor = "Homero";

    // Livro 14
    fixos[13].titulo = "Hamlet";
    fixos[13].ano = 1601;
    fixos[13].qtd = 7;
    fixos[13].autor = "William Shakespeare";

    // Livro 15
    fixos[14].titulo = "A Sangue Frio";
    fixos[14].ano = 1966;
    fixos[14].qtd = 3;
    fixos[14].autor = "Truman Capote";

    // Livro 16
    fixos[15].titulo = "O Sol é para Todos";
    fixos[15].ano = 1960;
    fixos[15].qtd = 9;
    fixos[15].autor = "Harper Lee";

    // Livro 17
    fixos[16].titulo = "1984";
    fixos[16].ano = 1949;
    fixos[16].qtd = 5;
    fixos[16].autor = "George Orwell";

    // Livro 18
    fixos[17].titulo = "Matar um Mockingbird";
    fixos[17].ano = 1960;
    fixos[17].qtd = 6;
    fixos[17].autor = "Harper Lee";

    // Livro 19
    fixos[18].titulo = "Apanhador no Campo de Centeio";
    fixos[18].ano = 1951;
    fixos[18].qtd = 7;
    fixos[18].autor = "J.D. Salinger";

    // Livro 20
    fixos[19].titulo = "Em Busca do Tempo Perdido";
    fixos[19].ano = 1913;
    fixos[19].qtd = 10;
    fixos[19].autor = "Marcel Proust";

    // Livro 21
    fixos[20].titulo = "Crime e Castigo";
    fixos[20].ano = 1866;
    fixos[20].qtd = 4;
    fixos[20].autor = "Fiódor Dostoiévski";

    // Livro 22
    fixos[21].titulo = "A Guerra dos Mundos";
    fixos[21].ano = 1898;
    fixos[21].qtd = 8;
    fixos[21].autor = "H.G. Wells";

    // Livro 23
    fixos[22].titulo = "O Nome da Rosa";
    fixos[22].ano = 1980;
    fixos[22].qtd = 6;
    fixos[22].autor = "Umberto Eco";

    // Livro 24
    fixos[23].titulo = "O Iluminado";
    fixos[23].ano = 1977;
    fixos[23].qtd = 9;
    fixos[23].autor = "Stephen King";

    // Livro 25
    fixos[24].titulo = "Guerra e Paz";
    fixos[24].ano = 1869;
    fixos[24].qtd = 7;
    fixos[24].autor = "Lev Tolstói";

    // Livro 26
    fixos[25].titulo = "A Revolução dos Bichos";
    fixos[25].ano = 1945;
    fixos[25].qtd = 12;
    fixos[25].autor = "George Orwell";

    // Livro 27
    fixos[26].titulo = "Ulisses";
    fixos[26].ano = 1922;
    fixos[26].qtd = 15;
    fixos[26].autor = "James Joyce";

    // Livro 28
    fixos[27].titulo = "O Pequeno Príncipe";
    fixos[27].ano = 1943;
    fixos[27].qtd = 3;
    fixos[27].autor = "Antoine de Saint-Exupéry";

    // Livro 29
    fixos[28].titulo = "Grande Sertão: Veredas";
    fixos[28].ano = 1956;
    fixos[28].qtd = 2;
    fixos[28].autor = "João Guimarães Rosa";

    // Livro 30
    fixos[29].titulo = "Matando hitler";
    fixos[29].ano = 1988;
    fixos[29].qtd = 18;
    fixos[29].autor = "Suicidio";
    
    int tamanho ;
    cout << "quantos livros voce deseja cadastrar? " << endl;
    cin >> tamanho;
    Livros *vetor_livro = new Livros[tamanho];
    
    CadLivros(vetor_livro, tamanho);
    
    int Nident = 0; // numero de identificacao
    cout << endl << "===============================================================";
    cout << endl << "Digite quantos usuarios serao cadastrados: " << endl;
    cin >> Nident;
    Usuario *cad_user = new Usuario[Nident];
    int cont;
   
    CadUsuarios(cad_user, Nident, cont);
    
    
    // Listar livros fixos
    cout << "Livros Disponíveis:" << endl;
    for (int i = 0; i < 30; i++) {
        cout << "Livro " << i + 1 << ":" << endl;
        cout << "Título: " << fixos[i].titulo << endl;
        cout << "Ano: " << fixos[i].ano << endl;
        cout << "Quantidade: " << fixos[i].qtd << endl;
        cout << "Autor: " << fixos[i].autor << endl;
        cout << endl;
    }
    
    
    //Listagem de livros por ano de publicaçao.
    int inicio_ano = 0;
    int final_ano = 0;
    cout << "qual ano inicial voce quer pesquisa: " << endl;
    cin >> inicio_ano;
    
    cout << "qual ano final voce quer pesquisar:"  << endl;
    cin >> final_ano;
    
    cout << "LIVROS RECEM CADASTRADOS" << endl;
    
    listagemDeLivros(vetor_livro,tamanho, inicio_ano, final_ano);

    while (true) {
        string decision;
        cout << "===============================================================" << endl;
        cout << "Escolha uma ação:" << endl;
        cout << "1. Emprestar Livros da biblioteca fixa: " << endl;
        cout << "2. Emprestar Livros cadastrados recentemente: " << endl;
        cout << "3. Devolver livro emprestado: " << endl;
        cout << "4. Sair" << endl;

        int escolha;
        cin >> escolha;

        switch (escolha) {
            case 1:
                  EmprestimoLivros_fixos(cad_user, fixos, 30, Nident); // Chame a função de empréstimo aqui
                break;
            case 2:
                  EmprestimoLivros(cad_user, vetor_livro, tamanho, Nident); // Chame a função para emprestar livros fixos
                break;
            case 3:
            
                DevolverLivro(cad_user, vetor_livro, decision);
                  break;
                  
            case 4:
                // Encerrar o programa
                return 0;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }

}
   
   
































