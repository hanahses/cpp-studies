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
    int soma = x + y; //soma recebe o resultado da soma de x+y
    int sub = y - x; //sub recebe o resultado da subtração de x-y
    
    
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << soma << '\n';
    std::cout << sub << '\n';

    soma+=1; //adiciona o valor 1 a variavel soma
    //soma++;
    std::cout << soma << '\n';

    sub-=1; //subtrai um do valor da variavel sub
    //sub--;
    std::cout << sub << '\n';

    soma+=sub; //a variavel soma, vai receber o valor: soma+sub
    std::cout << soma << '\n';

    sub-=soma; //a variavel sub, vai receber o valor: sub-soma
    std::cout << sub << '\n';
    
    
    //DOUBLE - Valores decimais
    double xd = 10.1;
    // xd*=2;

    double yd = 5.2;
    // yd/=2;

    double multi = xd*yd; //multiplicação entre dois doubles
    
    double div = xd/yd; //divisão entre dois doubles

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
    std::string idade = "20";



    std::cout << nome << '\n';

    std::cout << "Olá " << nome << " Você tem " << idade << '\n'; //exibindo texto e valores no mesmo comando


    

    

    return 0;
}