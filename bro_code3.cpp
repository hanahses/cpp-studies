#include <iostream>

//cout<< = saída
//cin>> = entrada 

int main() {

    std::string nome;
    int idade;

    std::cout << "Insira seu nome: \n";
    std::cin >> nome;
    std::cout << "Insira sua idade: \n";
    std::cin >> idade;

    std::cout <<"Olá " << nome << '\n';
    std::cout <<"Sua idade é de  " << idade;


    std::cout << "Insira seu nome completo: \n";
    std::getline(std::cin >>std::ws, nome);
    std::cout <<"Olá " << nome << '\n';


    return 0;
}