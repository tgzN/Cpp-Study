#include <iostream>

int main(void) {

    int num;

    std::cout << "Insira um numero\n";
    std::cin >> num;

    bool por3 = (num % 3 == 0);
    bool por7 = (num % 7 == 0);

    if (por3 && por7) {

        std::cout << "O número é divisível por 7 e por 3";     

    } else if (por3) {

        // numero e divisivel por 3 == OU SEJA: numero nao e divisivel por 7
        std::cout << "O número é divisível somente por 3";

    } else if (por7) {

        // numero e divisivel por 7 == OU SEJA: numero nao e divisivel por 3
        std::cout << "O número é divisível por 7 somente";


    } else {

        // nada
        std::cout << "O número não é divisivel nem por 7 nem por 3";

    };

    return 0;

};