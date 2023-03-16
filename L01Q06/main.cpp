#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double nota1, nota2, nota3, media;
  char nome[100];
  cin >> nome;
  cin >> nota1;
  cin >> nota2;
  cin >> nota3;

  nota1 = nota1+(nota1*0.20);
  nota2 = nota2+(nota2*0.30);
  nota3 = nota3+(nota3*0.50);
  media = (nota1 + nota2 + nota3) / 3;

  cout << "Média de " << nome << " = " << setprecision(2) << media << endl;
}