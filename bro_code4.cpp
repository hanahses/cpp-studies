#include <iostream>
#include <cmath>

int main() {

        double x = 3.5;
        double y = 7.0;
        double z;

        z = std::max(x,y); //retorna o maior valor entre as duas variáveis;
        std::cout << z << '\n';

        double w = std::min(x,y); //retorna o menor valor entre as duas variáveis;
        std::cout << w << '\n';

        z = pow(2,3); //dois elevado ao cubo;
        std::cout << z << '\n';

        w = sqrt(9); //raiz quadrada de 9;
        std::cout << w << '\n';

        z = abs(-7); //valor absoluto (positivo);
        std::cout << z << '\n';

        w = round(3.5); //função para arredondar;
        z = ceil(3.5); //arredondar para cima (ceil - ceiling = telhado);
        std::cout << z << '\n';

        w = floor(3.5); //arredondar para baixo (floor = chão);
        std::cout << w << '\n';

        //std::cout << z << '\n';
        //std::cout << w << '\n';






    return 0;
}