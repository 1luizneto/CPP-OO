#include "livro.hpp"
#include <string>
#include <iostream>

Livro::Livro( std::string novoTitulo, int novoCod, std::string novoGenero )
{
    setCodigo( novoCod ) ;
    setTitulo( novoTitulo ) ;
    setGenero( novoGenero ) ;
}

Livro::Livro() : Livro( "--Sem Titulo--" , 000 , "--Sem Genero-- " )
{}

void Livro::setTitulo( std::string nome )
{
    if ( !nome.empty() ) titulo = nome ;
}

std::string Livro::getTitulo( ) const
{
    return titulo ;
}

void Livro::setCodigo ( int cod )
{
    if (cod >= 001 ) codigo = cod;
}

int Livro::getCodigo ( ) const
{
    return codigo;
}


void Livro::setGenero ( std::string tipo )
{
    if ( !tipo.empty() ) genero = tipo ;
}

std::string Livro::getGenero( )
{
    return genero;
}

std::string Livro::print ()
{
    std::string imprima {"Titulo = "};

    return
        imprima.append(this->titulo)
        .append(", Genero = ")
        .append(this->genero)
        .append(", Codigo = ")
        .append(std::to_string(this->codigo))
    ;
}