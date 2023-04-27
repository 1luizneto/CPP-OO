//
// Created by luizn on 27/04/2023.
//

#ifndef SISTEMA_UNIVERSITARIO_CRIARGERENTE_HPP
#define SISTEMA_UNIVERSITARIO_CRIARGERENTE_HPP

#include "CriarFuncionario.hpp"
#include "Gerente.hpp"

class CriarGerente : public CriarFuncionario{
public:
    shared_ptr<Funcionario> addFuncionario () override;
};

#endif //SISTEMA_UNIVERSITARIO_CRIARGERENTE_HPP
