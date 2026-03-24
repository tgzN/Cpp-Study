#include <iostream>
#include <locale.h>

int main(void) {

    int salario, valor;
    setlocale(LC_ALL, "");

    std::cout << "Digite o salário: \n$";
    std::cin >> salario;

    std::cout << "Digite o valor desejado de empréstimo: \n$";
    std::cin >> valor;

    if (salario * 0.3 > valor) {

        std::cout << "O valor do empréstimo é muito alto para o salário do funcionário";
        return 0;

    };


    std::cout << "O valor do empréstimo foi aprovado para o funcionário";
    return 0;

}