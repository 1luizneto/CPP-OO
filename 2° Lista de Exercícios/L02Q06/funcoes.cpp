#include <iostream>
#include "referencias.hpp"
using namespace std;

float consumo_mensal ()
{
    float consumo;
    cout << "Consumo mensal: ";
    cin >> consumo;
    return consumo;

}

float calculo_consumo(float quantidade, float valor_kw)
{
    return quantidade * valor_kw;
}

float valor_kw(float valor)
{
    if (valor >= 300)
    {
        valor = 1;
    } else if (valor >= 200 and valor < 300)
    {
        valor = 0.80;
    } else if (valor < 200)
    {
        valor = 0.20;
    }
    return valor;
}

void nome_consumidor(float consumo, float preco_kw, float total )
{
    char nome[100];
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Consumidor: " << nome << "\nConsumo mensal: " << consumo << "\nPreco do kw/h em R$:" << preco_kw << "\nTotal a pagar R$:" << total << endl;
}