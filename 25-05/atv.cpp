#include <iostream>

int main(void) {

    int numeros[5];

    for (int i = 0; i < 5; i++) {

        std::cout << "\nInsira o valor n°" << i <<":\n";
        std::cin >> numeros[i];

    };

    std::cout << "\nA tabela!!!!\n";

    for (int i = 0; i < 5; i++) {

        if (numeros[i] % 2 > 0) {

            std::cout << "[" << i << "] " << numeros[i] <<"\n";
        };

    };
                
    return 0;

};