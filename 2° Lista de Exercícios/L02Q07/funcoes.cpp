#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "referencias.hpp"



double maior (double n1, double n2, double n3)
{
    double maior = n1;

    if (n2 > maior)
    {
        maior = n2;
    }
    if (n3 > maior)
    {
        maior = n3;
    }
    return maior;
}

double numero1()
{
    double numero1;
    cout << "Digite o primeiro numero: ";

    cin >> numero1;
    return numero1;
}

double numero2()
{
    double numero2;
    cout << "Digite o segundo numero: ";

    cin >> numero2;
    return numero2;
}

double numero3()
{
    double numero3;
    cout << "Digite o terceiro numero: ";

    cin >> numero3;
    return numero3;
}

double imprime_maior(double maior)
{
    cout << "Maior numero = " << maior << endl;
    return maior;
}