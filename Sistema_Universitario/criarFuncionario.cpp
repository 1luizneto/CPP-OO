//
// Created by luizn on 27/04/2023.
//

#include "CriarFuncionario.hpp"

void CriarFuncionario::lerDados(const shared_ptr<Funcionario>& func) {
    int matricula;
    cout << "Digite a matricula: ";
    cin >> matricula;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    func->setMatricula(matricula);

    string nome;
    cout << "Digite seu nome completo: ";
    getline(cin, nome, '\n');
    func->setNome(nome);

    double salario;
    cout << "Digite o salario base: ";
    cin >> salario;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    func->setSalario(salario);

    int idade;
    cout << "Digite sua Idade: ";
    cin >> idade;
    func->setIdade(idade);
}