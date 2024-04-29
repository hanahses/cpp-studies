#include <iostream>
//using namespace std;

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

    //INTEIROS
    int x; // valor inteiro x
    x = 5; //a variável x recebe o valor 5
    int y = 7; //a variável y recebe o valor 7 
    int soma = x + y;
    int sub = y - x;
    
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << soma << '\n';
    std::cout << sub << '\n';
    
    
    //DOUBLE - Valores decimais
    double xd = 10.1; 
    double yd = 5.2;
    double multi = xd*yd; //multiplicação entre dois doubles
    double div = xd/yd;

    std::cout << multi << '\n';
    std::cout << div << '\n';

    //CHAR - Caracter
    char a = 'A';

    std::cout << a << '\n';

    //BOOLEAN - Verdadeiro ou falso
    bool luz = true;

    std::cout << luz << '\n';

    //STRING - Conjunto de caracteres

    std::string nome = "Hanah"; //atribuindo a variavel nome(uma string) o "valor" Hanah
    
    std::cout << nome << '\n';

    

    

    return 0;
}