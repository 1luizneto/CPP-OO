#include <iostream>
#include <string>
#include "livro.hpp"
#include "catalogo.hpp"
#include <vector>

using namespace std;

Catalogo::Catalogo( std::string nome )
{
    setNome(nome);
}

Catalogo::Catalogo() : Catalogo( "--Sem Nome--" )
{}

void Catalogo::setNome ( std::string nome )
{
    if ( !nome.empty() ) nomeBiblioteca = nome;
}

std::string Catalogo::getNome ( ) const
{
    return nomeBiblioteca;
}

bool Catalogo::adicionarLivro(std::string tipo, std::string nome, int cod)
{
    if ( ! livroExiste( cod ) )
    {
        Livro novo( nome, cod, tipo );
        lista.emplace_back(novo);

        return true;
    }

    return false;
}

bool Catalogo::removerLivro (int cod)
{
    for ( int i = 0 ; i < lista.size() ; i++)
        if ( lista[i].getCodigo() == cod )
        {
            lista.erase(lista.begin()+i) ;
            return true;
        }
}


std::string Catalogo::montarString ( )
{
    std::string aux {"Catalogo nome=" + nomeBiblioteca};
    if ( ! lista.empty() )
    {
        aux.append("\n");
        for ( Livro livro : lista )
            aux.append("\t")
            .append(livro.print())
            .append("\n");
    }
    return aux;
}


int Catalogo::getQuantidade ( ) const
{
    return quantidadeLivros;
}


bool Catalogo::livroExiste( int cod )
{
    for (auto & i : lista)
    {
        i.print() ;
        return false;
    }
}