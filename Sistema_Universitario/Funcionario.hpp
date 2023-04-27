//
// Created by luizn on 07/04/2023.
//

#ifndef SISTEMA_UNIVERSITARIO_FUNCIONARIO_HPP_
#define SISTEMA_UNIVERSITARIO_FUNCIONARIO_HPP_

#include <string>
#include <iostream>
#include <iomanip>
#include <memory>

using namespace std ;

class Funcionario
{

private:
    int matricula{} ;
    string nome{} ;
    double salarioBase{1000} ;
    int idade{} ;

public:
    Funcionario(int matricula, const string& nome, int idade, double salario) ;
    Funcionario() ;

    void setMatricula ( int mat ) ;
    [[nodiscard]] int getMatricula ( ) const ;

    void setNome ( string nome ) ;
    [[nodiscard]] string getNome ( ) const ;

    void setSalario ( double salario ) ;
    virtual double getSalario ( ) ;

    void setIdade ( int idadde ) ;
    [[nodiscard]] int getIdade ( ) const ;

    virtual string print ( ) ;

};


#endif