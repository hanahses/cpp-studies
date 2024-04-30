#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

using inteiro_i = int;


namespace primeiro{
    int x = 1;
}

namespace segundo{
    int x = 2;
}


int main() {

    //const - contante (o valor de uma variável vai ser constante durante todo o código)
    const double PI = 3.14159;
    const int V_LUZ = 299792458;

    //namespace (permite que se use a mesma variável com diferentes valores)
    int x = 0;

    std::cout << primeiro::x << '\n';
    std::cout << segundo::x << '\n';
    std::cout << x << '\n';

    using namespace std;

    string sem_std = "String sem std";
    cout << sem_std << '\n';

    //typedef - faz com que o nome de determinado tipo de dado seja alterado para melhor aproveitamento do tempo
    pairlist_t pairlist;
    text_t nome = "Hanah";
    inteiro_i semestre = 5;

    std::cout << nome << '\n';
    std::cout << semestre << '\n';


    return 0;

}