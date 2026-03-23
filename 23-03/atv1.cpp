#include <iostream>

int main() {

    int val1, val2, total;

    std::cout << "Digite um valor inteiro:\n";
    std::cin >> val1;

    std::cout << "Digite outro valor inteiro:\n";
    std::cin >> val2;

    total = val1 + val2;
    

    if (total > 10) {

        std::cout << '\nA soma total é ' << total;

    } else {

        std::cout << '\nA soma total é menor que dez!';
        
    }

    return 0;

}