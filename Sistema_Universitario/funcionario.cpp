//
// Created by luizn on 07/04/2023.
//

#include "Funcionario.hpp"

// Construtores
Funcionario::Funcionario(const int matricula, const string& nome, const int idade, const double salario)
{
    setMatricula(this->matricula = matricula);
    setNome(this->nome = nome);
    setIdade(this->idade = idade);
    setSalario(this->salarioBase = salario);
}
Funcionario::Funcionario() : Funcionario(0, "--Sem Nome--", 0, 0.00)
{}

// Matrícula
void Funcionario::setMatricula ( int mat )
{
    if ( mat > 0 ) this->matricula = mat ;
}
int Funcionario::getMatricula ( ) const { return matricula; }
//

// Nome
void Funcionario::setNome ( string nome )
{
    if (!nome.empty()) this->nome = nome;
}
string Funcionario::getNome ( ) const { return nome; }
//

// Salário
void Funcionario::setSalario ( double salario )
{
    if ( salario > salarioBase ) this->salarioBase = salario;
}
double Funcionario::getSalario ( )
{
    return salarioBase ;
}
//

// Idade
void Funcionario::setIdade ( int idade )
{
    if ( idade > 0 ) this->idade = idade ;
}
int Funcionario::getIdade ( ) const { return idade; }
//

// Print
string Funcionario::print ( )
{
    stringstream stream;
    stream << fixed
           << setprecision( 2 )
           << this->Funcionario::getSalario() ;

    string aux{ "-- Funcionario -- \n"};

    return
            aux.append("Matricula: ")
                    .append(std::to_string (getMatricula()))
                    .append("\nNome: ")
                    .append(getNome())
                    .append("\nIdade: ")
                    .append(std::to_string(getIdade()))
                    .append("\nSalario Base = R$")
                    .append(stream.str())
                    .append("\n");
    ;
}