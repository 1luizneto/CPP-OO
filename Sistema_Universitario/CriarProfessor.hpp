//
// Created by luizn on 27/04/2023.
//

#ifndef SISTEMA_UNIVERSITARIO_CRIARPROFESSOR_HPP
#define SISTEMA_UNIVERSITARIO_CRIARPROFESSOR_HPP

#include "CriarFuncionario.hpp"
#include "Professor.hpp"

class CriarProfessor : public CriarFuncionario {
public:
    shared_ptr<Funcionario> addFuncionario () override;
};

#endif //SISTEMA_UNIVERSITARIO_CRIARPROFESSOR_HPP
