#include <iostream>
#include "catalogo.hpp"

/*
int main() {
    Livro Zap("Zap", 001, "Junior") ;
    std::cout << Zap.getTitulo();

    return 0 ;
}
*/
int main() {

  Catalogo catalogo("Catalogo IFPB - Campus Campina" ); // nomeBiblioteca
  catalogo.adicionarLivro( "Prog" , "Java", 335 );
  catalogo.adicionarLivro( "Prog" ,  "Java", 335 ); // ignorar
  catalogo.adicionarLivro( "Prog" , "Python", 447);
  catalogo.adicionarLivro( "Prog" , "C++ Primer", 778);

  std::cout << catalogo.montarString()
  << std::endl;



  bool resultado = catalogo.removerLivro(447 ); // true
  resultado = catalogo.removerLivro( 999 ); // false
  resultado = catalogo.livroExiste( 335 ); // true
  resultado = catalogo.livroExiste( 999 ); // false

  std::cout << catalogo.montarString()
  << std::endl;

  //  Livro *p = catalogo.getLivro(335 ); // retorna o endereço do objeto
  //  if( !(p == nullptr) )
  //  std::cout << p->getTitulo() << std::endl; // Java

  return 0;

}

