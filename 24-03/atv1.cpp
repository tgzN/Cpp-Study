#include <iostream>
#include <locale.h>

int main(void) {

    int num1, num2;
    setlocale(LC_ALL, "");

    std::cout << "Insira o primeiro número: \n";
    std::cin >> num1;
    std::cout << "Insira o segundo número: \n";
    std::cin >> num2;

    if (num1 > num2) {

        std::cout << "\nO número " << num1 << " é maior que o número " << num2;
    } else if (num2 > num1) {
        std::cout << "\nO número " << num2 << " é maior que o número " << num1;
    } else {
        std::cout << "\nOs números são iguais.";

    }

}