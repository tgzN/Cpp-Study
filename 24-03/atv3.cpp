#include <iostream>
#include <locale.h>

int main(void) {

    int num1;
    setlocale(LC_ALL, "");

    std::cout << "Digite o primeiro número:\n";
    std::cin >> num1;

    if (num1 < 0) {

        std::cout << "O número é negativo";
        return 0;

    };

    if (num1 == 0) {

        std::cout << "O número é zero";
        return 0;

    };

    std::cout << "O número é um inteiro";
    return 0;

};