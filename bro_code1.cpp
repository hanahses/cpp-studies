#include <iostream>


//função main
int main(){

    //comentários são feitos utilizando o //
    /*ou quando são necessárias várias linhas 
    é utilizado esse esquema*/

    std::cout << "I like pizza! \nIt's really good" << std::endl; 

    /*
    std - standard (padrão)
    c - character (caracter)
    out - output (saída)
    */


    // \n (quebra de linha)
    // std::endl; (quebra de linha com limpeza de buffer)

    int x; // valor inteiro x
    x = 5; //a variável x recebe o valor 5
    int y = 7; //a variável y recebe o valor 7 
    int soma = x + y;
    int sub = y - x;


    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << soma << '\n';
    std::cout << sub << '\n';

    return 0;
}