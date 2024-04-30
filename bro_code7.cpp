#include <iostream>

//operador ternário

int main() {

    //verificar se foi aprovado
    int nota;

    std::cout << "Insira sua nota: \n";
    std::cin >> nota;

    nota >= 7? std::cout << "Aprovado!" : std::cout << "Reprovado";

    
    //verificar se é impar ou par
    int num;
    std::cout << "\nInsira um numero: \n";
    std::cin >> num;

    num%2 ? std::cout << "Impar \n" : std::cout << "Par \n";

    //verificar se está com fome
    bool fome = true;

    fome ? std::cout << "Com fome!" : std::cout << "Sem fome!";
    // std::cout << (fome ? "Com fome!" : "Sem fome!");

    if (num%2 && fome) {

        std::cout << " \nImpar e fome! \n";

    } else if (num%2 || fome) {

        std::cout << " \nImpar ou fome! \n";

    } 
    else {
        std::cout << "\nPar e sem fome";
     }
    
    
    return 0;
}