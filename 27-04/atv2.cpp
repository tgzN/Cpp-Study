#include <iostream>

int main(){

    int valor, total = 0, rep = 0;

    do {

        std::cout << "\nInsira um valor: ";
        std::cin >> valor;

        if (valor > 0) {

            total = total + valor;
            rep++;

        };

    } while (valor > 0);

    if (rep > 0) {
    
        std::cout << "Foram digitados " << rep << " valores, totalizando uma média de " << total/rep;
    
    } else {

        std::cout << "Digite algo, fica difícil tirar média assim...";

    };

    return 0;
    
}
