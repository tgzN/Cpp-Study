#include <iostream>

int main(void) {

    int num;

    std::cout << "Insira um numero\n";
    std::cin >> num;

    bool por10 = (num % 10 == 0);
    bool por5 = (num % 5 == 0);
    bool por2 = (num % 2 == 0);

    if (por10 && por5 && por2) {

        std::cout << "O número é divisível por 10 e por 5 e por 2";     

    } else if (por10 && por5) {

        std::cout << "O número é divisível por 10 e por 5";

    } else if (por10 && por2) {

        std::cout << "O número é divisível por 10 e por 2";

    } else if (por5 && por2) {

        std::cout << "O número é divisível por 5 e por 2";

    } else {

        std::cout << "O número não é divisivel por nenhuma das opções (10, 5 ou 2)";

    };

    return 0;

};