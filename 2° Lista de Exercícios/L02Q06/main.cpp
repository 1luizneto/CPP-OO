#include "referencias.hpp"

int main ()
{
    float consumo, valor, total;
    consumo = consumo_mensal();
    valor = valor_kw(consumo);
    total = calculo_consumo(consumo, valor);
    nome_consumidor(consumo, valor, total);
}