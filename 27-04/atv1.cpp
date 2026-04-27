#include <iostream>

int main(){

    int n1, n2;

    do {
        
        std::cout << "\nInsira um valor: ";
        std::cin >> n1;
        
        std::cout << "\nInsira outro valor: ";
        std::cin >> n2;

        if (n1 * n2 > 0) {

            std::cout << "Os números digitados foram: " << n1 << " e " << n2;

        };
    
    } while (n1 * n2 > 0);

    return 0;
}
