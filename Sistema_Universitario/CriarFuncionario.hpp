//
// Created by luizn on 27/04/2023.
//

#ifndef SISTEMA_UNIVERSITARIO_CRIARFUNCIONARIO_HPP
#define SISTEMA_UNIVERSITARIO_CRIARFUNCIONARIO_HPP

#include "Funcionario.hpp"
#include <limits> // só usado aqui

class CriarFuncionario {
public:
    virtual shared_ptr<Funcionario> addFuncionario () = 0;
    virtual void lerDados (const shared_ptr<Funcionario>& func);
};

#endif //SISTEMA_UNIVERSITARIO_CRIARFUNCIONARIO_HPP
