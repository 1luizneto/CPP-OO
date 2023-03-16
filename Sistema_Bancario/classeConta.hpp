//
// Created by luizn on 16/03/2023.
//

#ifndef SISTEMA_BANCARIO_CLASSECONTA_HPP
#define SISTEMA_BANCARIO_CLASSECONTA_HPP

#include <iostream>

class Conta
{
private:
    int numero {0000};
    double saldo {0};
    std::string titular { "-- Sem Nome --" };

public:
    bool sacar ( double quantia );

    bool depositar ( double quantia );

    int getNumero () const;
    void setNumero ( int novoNumero );

    double getSaldo () const;

    std::string getTitular () const;
    void setTitular ( std::string novoTitular );

    void montarStringConta ();

};


#endif //SISTEMA_BANCARIO_CLASSECONTA_HPP
