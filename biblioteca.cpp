#include <string>
#include <vector>
#include <iostream>
#include "biblioteca.hpp"
#include <iostream>

using namespace std;

void CadLivros(Livros *cad_livro, int tamanho ) {
  string titulo;
  int ano;
  int qtd;
  string autor;
  
 

    for (int i = 0; i < tamanho; i++) { 
    
    cout << "===============================================================" << endl;
    cout << i << "Digite o titulo do livro a ser cadastrado: " << endl;
    cin.ignore();
    getline(cin,titulo);
    
    
    cout << "===============================================================" << endl;
    cout << "Insira o ano de publicação do livro: " << endl;
    cin >> ano;
    
    
    cout << "===============================================================" << endl;
    cout << "Nome do autor: " << endl;
    cin >> autor;
    
    
    cout << "===============================================================" << endl;
    cout << "Informe a quantidade de cópias totais do livro na biblioteca: " << endl;
    cin >> qtd;
    
    Livros cadas_livro;
    
    cadas_livro.titulo = titulo;
    cadas_livro.ano = ano;
    cadas_livro.qtd = qtd;
    cadas_livro.autor = autor;
    
    cad_livro[i] = cadas_livro;
    
  

  }
  
  
}


void CadUsuarios(Usuario *cad_user,int Nident,int cont) {
    
    string usuario;
    int num_identificacao;
    string livros_emprestados; 
    
    for(int i = 0;i < Nident;i++){
        
        
        cout << "Nome de Usuario: " << endl;
        cin >> usuario;
        
        cout << "Digite seu numero de identificaçao: " << endl;
        cin >> num_identificacao;
        
        cout << "Livros emprestados:" << endl;
        cin.ignore();
        getline(cin,livros_emprestados);
        
   
        
        Usuario cadas_user;
        cadas_user.usuario= usuario;
        cadas_user.num_identificacao= num_identificacao;
        cadas_user.livros_emprestados= livros_emprestados; 
        
       
        cad_user[i] = cadas_user;
        
        
    }
}
    //Funçao listagem de livros por ano de publicaçao.
    void listagemDeLivros(Livros *cad_livro, int tamanho, int inicio_ano, int final_ano){
        for(int i =0;i < tamanho;i++){
            Livros cadas_livro = cad_livro[i];
            if(cadas_livro.ano >= inicio_ano && cadas_livro.ano <= final_ano) {
            cout << "Título: " << cadas_livro.titulo << endl;
            cout << "Ano publicação: " << cadas_livro.ano << endl;
            cout << "Quantidade: " << cadas_livro.qtd << endl;
            cout << "Autor: " << cadas_livro.autor << endl;
        
            
        }
    }  
        
}



   void EmprestimoLivros_fixos(Usuario* cad_user, Livros* cad_livro, int tamanho, int Nident) {
    string nome_usuario;
    string decisao;

    cout << "===============================================================" << endl;
    cout << "Digite o nome de usuário para empréstimo: ";
    cin >> nome_usuario;

    // verificando se o usuario existe
    int usuario_existente = -1;
    for (int i = 0; i < Nident; i++) {
        if (cad_user[i].usuario == nome_usuario) {
            usuario_existente = i;
            break;
        }
    }
        //se o usuario errar ou digitar o nome de outro fornecera nome invalido por o -1 tudo menos 0 do vetor e igual a false, nao existe ou errado 
    if (usuario_existente == -1) {
        cout << "Usuário não encontrado. Certifique-se de que o nome de usuário está correto." << endl;
        return;
    }

        
        cout << "Digite o título do livro a ser emprestado: ";
        string titulo_livro;
        cin.ignore();
        getline(cin, titulo_livro);

        // Verifique se o livro existe
        int livro_existente = -1;
        for (int i = 0; i < tamanho; i++) {
            if (cad_livro[i].titulo == titulo_livro) {
                livro_existente = i;
                break;
            }
        }
        
        // mesmo esquema do -1 para verificar o livro cadastrado 
        if (livro_existente == -1) {
            cout << "Livro não encontrado. Certifique-se de que o título do livro está correto." << endl;
            return;
        }

        // Verificando se a copias 
        if (cad_livro[livro_existente].qtd > 0) {
            // Realize o empréstimo
            cad_user[usuario_existente].livros_emprestados += (cad_livro[livro_existente].titulo + ", ");
            cad_livro[livro_existente].qtd--;

            cout << "Livro emprestado com sucesso para " << nome_usuario << "." << endl;
        } else {
            cout << "Não há cópias disponíveis do livro desejado." << endl;
        }
    } 
    
   
   // livros cadastrados 
   void EmprestimoLivros(Usuario *cad_user, Livros *cad_livro, int tamanho, int Nident) {
      string nome_usuario;
      string titulo_livro;

      cout << "===============================================================" << endl;
      cout << "Digite o nome de usuário para empréstimo: ";
      cin >> nome_usuario;

     // Verifique se o usuário existe
      int usuario_existente = -1;
      for (int i = 0; i < Nident; i++) {
        if (cad_user[i].usuario == nome_usuario) {
            usuario_existente = i;
            break;
        }
    }

   if (usuario_existente == -1) {
      cout << "Usuário não encontrado. Certifique-se de que o nome de usuário está correto." << endl;
         return;
   }

   cout << "Digite o título do livro a ser emprestado: ";
   cin.ignore();
   getline(cin, titulo_livro);

   // Verifique se o livro existe
   int livro_existente = -1;
   for (int i = 0; i < tamanho; i++) {
        if (cad_livro[i].titulo == titulo_livro) {
            livro_existente = i;
            break;
        }
    }

    if (livro_existente == -1) {
        cout << "Livro não encontrado. Certifique-se de que o título do livro está correto." << endl;
        return;
    }

    // Verifique se há cópias disponíveis do livro
    if (cad_livro[livro_existente].qtd > 0) {
        // Realize o empréstimo
         cad_user[usuario_existente].livros_emprestados += (cad_livro[livro_existente].titulo + ", ");
         cad_livro[livro_existente].qtd--;
         cout << "Livro emprestado com sucesso para " << nome_usuario << "." << endl;
         
    } else {
       
        cout << "Não há cópias disponíveis do livro desejado." << endl;
    }
    cout << cad_livro[livro_existente].titulo << " tem " << cad_livro[livro_existente].qtd << endl;
}


  void realizarEmprestimo(Livros& livro) {
    if (livro.qtd <= 0) {
        cout << "Não há cópias disponíveis do livro '" << livro.titulo << "'." << endl;
        return;
    }

    livro.qtd--;

    cout << "Livro '" << livro.titulo << "' emprestado com sucesso." << endl;
}
void DevolverLivro(Usuario *cad_user, Livros *cad_livro,string decision) {
    cout << cad_user <<  " entregou atrasado? " << endl;
    cin >> decision;
    
    if(decision == "sim"){
       cout << "Voce levou uma multa de 2 reais por ter atrasado a entrega do livro" << endl;
    }
    else;
      cout << "Boa, entregue sempre seu livro no dia do prazo" << endl;
    
}
    
     
     

