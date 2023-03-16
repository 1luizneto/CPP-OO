//
// Created by luizn on 16/03/2023.
//

#include "classeConta.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

bool Conta::sacar ( double quantia )
{
    saldo -= quantia;
}

bool Conta::depositar ( double quantia )
{
    saldo = quantia;
}

void Conta::setNumero ( int novoNumero )
{
    numero = (novoNumero >= 0000) ? novoNumero : numero;
}

int Conta::getNumero () const
{
    return numero;
}

void Conta::setTitular ( std::string novoTitular )
{
    titular = novoTitular;
}

std::string Conta::getTitular ( ) const
{
    return titular;
}

double Conta::getSaldo ( ) const
{
    return saldo;
}

void Conta::montarStringConta ( )
{
    cout << "Numero da conta: " << numero << "\n"
    << "Titular: " << titular << "\n"
    << "Saldo R$" << saldo
    << endl;
}
