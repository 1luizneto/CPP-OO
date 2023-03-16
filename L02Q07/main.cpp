#include "referencias.hpp"

int main()
{
    double n1,n2,n3, maior_numero;

    n1 = numero1();
    n2 = numero2();
    n3 = numero3();

    maior_numero = maior(n1, n2, n3);
    imprime_maior(maior_numero);
}