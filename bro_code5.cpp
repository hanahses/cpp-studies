#include <iostream>

int main() {

    int number;

    std::cout << "Insira o numero: (Voce tem uma chance!) \n";
    std:: cin >> number;

    if (number == 999) {

        std::cout << "Parabens! Voce acertou o numero!!";
    } 
    else {

        std::cout << "Numero errado, mais sorte da proxima vez";
    }


    return 0;
}