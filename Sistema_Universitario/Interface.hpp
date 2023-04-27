//
// Created by luizn on 27/04/2023.
//

#ifndef SISTEMA_UNIVERSITARIO_INTERFACE_HPP
#define SISTEMA_UNIVERSITARIO_INTERFACE_HPP

#include "Universidade.hpp"
#include "CriarFuncionario.hpp"
#include "CriarGerente.hpp"
#include "CriarProfessor.hpp"

const int SAIR = 0;
const int PROFESSOR = 1;
const int GERENTE = 2;


class Interface{
private:
    shared_ptr<Universidade> universidade {nullptr};

    void printHeader();
    void printMenu();
    int lerMenu();

public:
    explicit Interface(const shared_ptr<Universidade>& universidade);
    void exibirMenu();
};

#endif //SISTEMA_UNIVERSITARIO_INTERFACE_HPP
