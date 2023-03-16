#include <iostream>
#include <vector>
#include "referencias.hpp"

using namespace std;

std::vector<int> lista ()
{
    int num = -1;
    vector<int> numeros;
    while (num != 0)
    {
        num = 0;
        cin >> num;
        numeros.push_back(num);
    }
    return numeros;
}


void imprime_soma(const std::vector<int>& lista)
{
    int resultado{}, num{}, i{};
    const vector<int>& soma = lista;

    for (i = 0; i < soma.size(); i++)
    {
        num = soma[i];
        resultado += num;
    }

    cout << resultado;
}