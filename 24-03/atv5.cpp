#include <iostream>
#include <locale.h>

int main(void) {

    int num;
    setlocale(LC_ALL, "");

    std::cout << "Digite o número de 4 dígitos: \n";
    std::cin >> num;

    if ((num/100) % 4 == 0) {

        std::cout << "O número é multiplo de 4";
        return 0;

    }

    std::cout << "O número não é múltiplo de 4;";
    return 0;

}