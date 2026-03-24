#include <iostream>
#include <locale.h>

int main(void) {

    int num;
    setlocale(LC_ALL, "");

    std::cout << "Digite o número: \n";
    std::cin >> num;

    if (num % 2 == 0) {

        std::cout << "O número é par";
        return 0;

    }

    std::cout << "O número é ímpar";
    return 0;

}