//
// Created by luizn on 27/04/2023.
//

#include "CriarGerente.hpp"

shared_ptr<Funcionario> CriarGerente::addFuncionario () {
    shared_ptr<Gerente> gerente = make_shared<Gerente>();

    CriarFuncionario::lerDados(gerente);

    cout << "Digite a comissao do gerente: ";
    int comissao;
    cin >> comissao;
    gerente->setComissao(comissao);

    return gerente;
}
