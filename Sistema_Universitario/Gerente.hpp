//
// Created by luizn on 26/04/2023.
//

#ifndef SISTEMA_UNIVERSITARIO_GERENTE_HPP
#define SISTEMA_UNIVERSITARIO_GERENTE_HPP

#include "Funcionario.hpp"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Gerente : public Funcionario{
private:
    double comissao{};
public:
    Gerente(int matricula, const string& nome, int idade, double salario, double comissao);
    Gerente();

    double getSalario () override;

    string print () override;

    void setComissao (double comissao) ;
    [[nodiscard]] double getComissao () const;
};



#endif //SISTEMA_UNIVERSITARIO_GERENTE_HPP
