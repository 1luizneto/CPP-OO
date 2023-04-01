//
// Created by luizn on 22/03/2023.
//


#ifndef SISTEMA_BIBLIOTECA_CATALOGO_HPP
#define SISTEMA_BIBLIOTECA_CATALOGO_HPP

#include <iostream>
#include <string>
#include <vector>
#include "livro.hpp"


class Catalogo
{
private:
    int quantidadeLivros ;
    std::vector<Livro> lista ;
    std::string nomeBiblioteca ;

public:

    Catalogo();
    Catalogo(std::string nome );

    void setNome ( std::string nome );
    std::string getNome ( ) const;

    bool adicionarLivro(std::string tipo, std::string nome, int cod);
    bool removerLivro (int cod);

    std::string montarString ( );

    int getQuantidade ( ) const;

    //int getLivro ( ) const;

    bool livroExiste (int cod);

};

#endif //SISTEMA_BIBLIOTECA_CATALOGO_HPP
