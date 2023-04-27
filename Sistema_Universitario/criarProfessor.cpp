//
// Created by luizn on 27/04/2023.
//

#include "CriarProfessor.hpp"

shared_ptr<Funcionario> CriarProfessor::addFuncionario() {
    shared_ptr<Professor> prof = make_shared<Professor>();

    CriarFuncionario::lerDados(prof);

    cout << "Digite o numero de horas de disciplina do professor: ";
    int horas{0};
    cin >> horas;
    prof->setNumHoras(horas);

    return prof;
}