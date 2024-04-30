#include <iostream>

int main() {

    double temp;
    char medida;

    std::cout << "------------ Conversor de temperatura ------------ \n";

    std::cout << "Insira a unidade de medida a ser convertida (F - Fahrenheit | C - Celsius) \n";
    std::cin >> medida;

    if (medida == 'F' || medida == 'f') {

        std::cout << "Insira a temperatura em Celsius a ser convertida \n";
        std::cin >> temp;

        temp = (temp * 1.8) + 32;

        std::cout << "\n A temperatura eh de: " << temp << " F\n";

    } else if (medida == 'C' || medida == 'c') {

        std::cout << "Insira a temperatura em Fahrenheit a ser convertida \n";
        std::cin >> temp;

        temp = (temp - 32)/1.8;
        std::cout << "\n A temperatura eh de: " << temp << " C\n";


    } else {

       std::cout << "Insira a medida apenas em C ou F\n";   

    }

    return 0;

}