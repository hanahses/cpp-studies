#include <iostream>

int main() {

    int op;
    double n1;
    double n2;

    std::cout << "Insira a operacao: (soma = 1, subt = 2, multi = 3, div = 4)\n";
    std::cin >> op;

    std::cout << "Insira o primeiro numero \n";
    std::cin >> n1;
    
    std::cout << "Insira o segundo numero \n";
    std::cin >> n2;

    switch(op) {

        case 1:
            std::cout << n1 + n2;
            break;


        case 2:
            std::cout << n1 - n2;
            break;

        case 3:
            std::cout << n1 * n2;
            break;

        case 4:
            if (n2 == 0) {
                std::cout << "Divisao por 0";

            } else {
            std::cout << n1 / n2;

            }
            break;

        default:
            std::cout << "Entrada invalida!";

    }

    return 0;

}