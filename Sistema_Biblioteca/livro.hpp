#ifndef SISTEMA_BIBLIOTECA_LIVRO_HPP
#define SISTEMA_BIBLIOTECA_LIVRO_HPP

#include <string>

class Livro{

private:
    std::string titulo ;
    int codigo ;
    std::string genero ;

public:

    Livro() ;
    Livro( std::string novoTitulo, int novoCod, std::string novoGenero ) ;

    void setTitulo ( std::string nome ) ;
    std::string getTitulo ( ) const ;

    void setGenero ( std::string tipo ) ;
    std::string getGenero ( );

    void setCodigo ( int cod ) ;
    int getCodigo ( ) const ;

    std::string print ( ) ;
};


#endif