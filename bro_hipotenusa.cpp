#include <iostream>
#include <cmath>

int main(){

    double cat_adj;
    double cat_op;
    double hip;

    std::cout << "Insira o valor do cateto adjacente: \n";
    std::cin >> cat_adj;
    std::cout << "Insira o valor do cateto oposto: \n";
    std::cin >> cat_op;

    cat_adj = pow(cat_adj,2);
    cat_op = pow(cat_op,2);

    hip = (cat_adj + cat_op);
    hip = sqrt(hip);

    std::cout << "Hipotenusa = " << hip << '\n';


    return 0;
}