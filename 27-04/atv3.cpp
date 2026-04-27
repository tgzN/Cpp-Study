#include <iostream>

int main(){

    int valor, rep = 0;

    do {

        std::cout << "\nInsira um valor: ";
        std::cin >> valor;

        if (valor > 100 && valor < 200) {

            rep++;

        };

    } while (valor != 0);

    std::cout << "Foram digitados " << rep << " valores entre 100 e 200.";
    
    return 0;
    
}
