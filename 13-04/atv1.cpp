#include <iostream>

int main(void) {

    float num1, num2;

    std::cout << "Digite um número:\n";
    std::cin >> num1;

    std::cout << "Digite outro número:\n";
    std::cin >> num2;
    
    while (num1 > 0 && num2 > 0) {

        std::cout << "Ambos valores são positivos, seguindo repetição!\n";

        std::cout << "Digite um número:\n";
        std::cin >> num1;

        std::cout << "Digite outro número:\n";
        std::cin >> num2;

    }

    std::cout << "Um dos valores era negativo, encerrando sistema...\n";

    return 0;
};