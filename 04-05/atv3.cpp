#include <iostream>

int main() {

    int i, val;

    for (i=1; i<=10; i++){
        
        std::cout << "Insira um valor:\n";
        std::cin >> val;
        std::cout << "Quadrado do valor: "<< val * val << std::endl;
    
    };

    return 0;
}