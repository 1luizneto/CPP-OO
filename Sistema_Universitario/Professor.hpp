//
// Created by luizn on 10/04/2023.
//

#ifndef SISTEMA_UNIVERSITARIO_PROFESSOR_HPP
#define SISTEMA_UNIVERSITARIO_PROFESSOR_HPP

#include "Funcionario.hpp"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Professor : public Funcionario
{
private:
    int numHoras{} ;

public:
    Professor( int matricula, const string& nome, int idade, double salario ,int numHoras );
    Professor();

    double getSalario() override ;

    void setNumHoras ( int horas ) ;
    [[nodiscard]] int getNumHoras () const ;

    string print ( ) override ;
};

#endif //SISTEMA_UNIVERSITARIO_PROFESSOR_HPP
