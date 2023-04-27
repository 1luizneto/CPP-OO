//
// Created by luizn on 27/04/2023.
//

#include "Universidade.hpp"

bool Universidade::addFuncionario ( const shared_ptr<Funcionario>& func)
{
    for ( const auto& it : this->lista )
        if ( it->getMatricula() == func->getMatricula() )
            return false;

    this->lista.emplace_back(func);
    return true;
}

bool Universidade::delFuncionario(int matricula) {
    for ( auto it = this->lista.begin(); it != this->lista.end(); ++it) {
        if ((*it)->getMatricula() == matricula) {
            this->lista.erase(it);
            return true;
        }
    }
    return false;
}

string Universidade::listarTodosFuncionarios ()
{
    string funcionarios;
    int posicao{0};
    for (const auto& it : this->lista){
        funcionarios.append("-- Funcionario ")
        .append(to_string(posicao))
        .append("--\n")
        .append("Matricula: ")
        .append(to_string((*it).getMatricula()));
        posicao++;
    }
    return funcionarios;
}

//void Universidade::Universidade (string endereco)
//{}

//int Universidade::getQtdFuncionarios () const
//{}

//Funcionario Universidade::getFuncionario (int matricula)
//{}

//bool Universidade::funcionarioExiste(int matricula)
//{}