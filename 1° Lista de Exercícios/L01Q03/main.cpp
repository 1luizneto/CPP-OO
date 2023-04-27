#include <iostream>]
#include <iomanip>
using namespace std;

int main()
{
    const auto default_precision{cout.precision()};
    double idade;
    cin >> idade;
    long segundos;
    segundos = idade*365;
    segundos = 60*(60*(segundos*24));
    cout << setprecision(default_precision) <<segundos << endl;

}