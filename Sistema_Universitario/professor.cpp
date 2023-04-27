//
// Created by luizn on 11/04/2023.
//

#include "Professor.hpp"

Professor::Professor( const int matricula, const string& nome, const int idade, const double salario, const int numHoras ) : Funcionario(matricula, nome, idade, salario)
{
    setNumHoras(this->numHoras = numHoras);
}
Professor::Professor() : Professor(0, "--Sem Nome--", 0, 0.00, 00)
{}

double Professor::getSalario()
{
    return Funcionario::getSalario() + numHoras;
}

void Professor::setNumHoras ( int horas )
{
    if ( horas > 0 ) this->numHoras = horas;
}

int Professor::getNumHoras () const
{
    return numHoras;
}

string Professor::print ( )
{
    stringstream formatado;
    formatado << fixed << setprecision( 2 ) << this->Professor::getSalario();

    string aux {"\n"};
    return Funcionario::print() +
        aux.append("-- Profissao: Professor --\n")
        .append("Numero de Horas Trabalhadas: ")
        .append(to_string(getNumHoras()))
        .append("\nSalario Total com Bonus: R$")
        .append(formatado.str())
        .append("\n");
}
