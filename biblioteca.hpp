#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <string>
#include <vector>
#include <iostream>


using namespace std;

struct Livros {
   string titulo;
   int ano;
   int copia;
   int qtd;
   string autor;

   
};


struct Usuario {
  string usuario;
  int num_identificacao;
  string livros_emprestados; 
  
};


struct Emprestimo {
    string nome_usuario;
    string titulo_livro;
    int data;
};



    void CadLivros(Livros *cad_livro, int qtd_copia);//Cadastro de livro
    
    void CadUsuarios(Usuario *cad_user, int Nident, int cont);//cadastro de usuario
    
    void listagemDeLivros(Livros *cad_livro, int tamanho,  int inicio_ano, int final_ano);
    
    void EmprestimoLivros_fixos(Usuario* cad_user, Livros* cad_livro, int tamanho, int Nident);
    
    void EmprestimoLivros(Usuario* cad_user, Livros* cad_livro, int tamanho, int Nident);
    
    void realizarEmprestimo(Livros& livro);
    
    void DevolverLivro(Usuario *cad_user, Livros *cad_livro,string decision);
    
    
    
   
   
    
    











#endif