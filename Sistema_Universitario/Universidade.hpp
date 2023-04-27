//
// Created by luizn on 26/04/2023.
//

#ifndef SISTEMA_UNIVERSITARIO_UNIVERSIDADE_HPP
#define SISTEMA_UNIVERSITARIO_UNIVERSIDADE_HPP

#include "Funcionario.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <algorithm>

using namespace std;

class Universidade : public Funcionario{
private:
    vector<shared_ptr<Funcionario>> lista;
    string endereco;
public:
    bool addFuncionario(const shared_ptr<Funcionario>& func);
    bool delFuncionario(int matricula);

    string listarTodosFuncionarios ();

    //void Universidade (string endereco);

    //int getQtdFuncionarios () const;

    //Funcionario getFuncionario (int matricula);

    //bool funcionarioExiste(int matricula) ;
};


#endif //SISTEMA_UNIVERSITARIO_UNIVERSIDADE_HPP
