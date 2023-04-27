//
// Created by luizn on 27/04/2023.
//

#include "Gerente.hpp"

Gerente::Gerente(const int matricula, const string& nome, const int idade, const double salario, const double comissao) : Funcionario(matricula, nome, idade, salario)
{
    setComissao(this->comissao = comissao);
}
Gerente::Gerente() : Gerente(000, "-- Sem Nome --", 00, 0.00, 0.00)
{}

double Gerente::getSalario ()
{
    return Funcionario::getSalario() + comissao;
}

string Gerente::print ()
{
    stringstream formatado;
    formatado << fixed << setprecision(2)
    << this->Gerente::getSalario();

    stringstream comissaoF;
    comissaoF << fixed << setprecision(2)
    << this->getComissao();

    string aux {"\n"};
    return Funcionario::print() +
        aux.append("-- Profissao: Gerente --\n")
        .append("Comissao: R$")
        .append(comissaoF.str())
        .append("\nSalario + Comissao: R$")
        .append(formatado.str());
}

void Gerente::setComissao (double comissao)
{
    if ( comissao > 0) this->comissao = comissao;
}

double Gerente::getComissao () const
{
    return this->comissao;
}