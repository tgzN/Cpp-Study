#include <iostream>

int main(void) {

    int num;

    std::cout << "Insira um número: \n";
    std::cin >> num;

    if (num % 5 == 0) {

        std::cout << "O numero e divisivel por 5";

    } else {

        std::cout << "O número não é divisivel por 5";

    };

    return 0;

};
