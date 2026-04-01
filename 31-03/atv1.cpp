#include <iostream>

int main() {

    char inicial;
    
    std::cout << "Insira a inicial de seu nome: \n";
    std::cin >> inicial;

    if (inicial == 'a' || inicial == 'd' || inicial == 'm' || inicial == 's') {

        std::cout << "Parabéns! O cliente tem direito ao desconto de 30%";

    } else {

        std::cout << "Infelizmente o cliente não tem direito ao desconto.";

    }

    return 0;

}