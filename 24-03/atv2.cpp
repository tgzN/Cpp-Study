#include <iostream>
#include <locale.h>

int main(void) {

    int num1, num2, num3;
    setlocale(LC_ALL, "");

    std::cout << "Insira o primeiro numero: \n";
    std::cin >> num1;

    std::cout << "Insira o segundo numero: \n";
    std::cin >> num2;

    std::cout << "Insira o terceiro numero: \n";
    std::cin >> num3;

    if (num1 > num2 && num1 > num3) {

        std::cout << "O primeiro número é o maior.";
        return 0;

    } if (num2 > num1 && num2 > num3) {

        std::cout << "O segundo númerio é o maior";
        return 0;

    } if (num3 > num1 && num3 > num2) {

        std::cout << "O terceiro número é o maior";
        return 0;

    } 

    std::cout << "Os números são iguais";
    return 0;

}