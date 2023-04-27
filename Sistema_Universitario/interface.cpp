//
// Created by luizn on 27/04/2023.
//

#include "Interface.hpp"

Interface::Interface(const shared_ptr<Universidade> &universidade) {
    this->universidade = universidade;
}

int Interface::lerMenu() {
    int escolha {SAIR};
    cout << "Por favor, digite uma dentre as opcoes acima: ";
    cin >> escolha;

    return escolha;
}

void Interface::printMenu() {
    cout << "1- Adicionar Professor\n"
              << "2- Adicionar Gerente\n"
              << "0- Sair do programa\n"
              << "---------------------------------------------------------"
              << endl;
}

void Interface::printHeader() {
    cout << "---------------------------------------------------------\n"
         << "Bem-vindo(a) ao programa de processamento de funcionarios\n"
         << "---------------------------------------------------------"
         << endl;
}


void Interface::exibirMenu() {
    printHeader();
    printMenu();

    shared_ptr<CriarFuncionario> criar {nullptr};
    shared_ptr<Funcionario> func {nullptr};

    int escolha;
    do {
        escolha = lerMenu();
        switch (escolha) {
            case SAIR:
                continue;
            case PROFESSOR:
                criar = make_shared<CriarProfessor>();
                func = criar->addFuncionario();
                universidade->addFuncionario(func);
                break;
            case GERENTE:
                criar = make_shared<CriarGerente>();
                func = criar->addFuncionario();
                universidade->addFuncionario(func);
                break;
            default: cout << "Opcaoo invalida. Tente novamente.";
        }
    } while (escolha != SAIR);
}