#include "referencias.hpp"
#include <string>

int main() {


    std::string name(nome(name));


    double n1 = nota1();
    double n2 = nota2();
    double n3 = nota3();

    double media = func_media(n1,n2,n3);

    imprime_nome(name);
    func_conceito(media);



    return 0;
}
