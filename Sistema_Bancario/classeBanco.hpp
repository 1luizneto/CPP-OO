//
// Created by luizn on 16/03/2023.
//

#ifndef SISTEMA_BANCARIO_CLASSEBANCO_HPP
#define SISTEMA_BANCARIO_CLASSEBANCO_HPP

#include <string>
#include <vector>
#include <iostream>
#include "classeConta.hpp"

class Banco
{
private:

    std::string nome;
    std::string cnpj;
    std::vector<Conta> lista;

public:

    std::string getNome( );
    std::string setNome ( std::string novo );

    std::string getCnpj ( );
    std::string setCnpj ( std::string novo );

    bool adcionarConta ( int num, std::string titular, double saldo );

    bool removerConta ( int num );

    bool contaExiste ( int num );

    void montarStringTodasContas ( );

    int quantidadeContas ( );

};

#endif //SISTEMA_BANCARIO_CLASSEBANCO_HPP
