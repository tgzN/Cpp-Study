#include <iostream>
#include <locale.h>

int main(void) {
	
	double salario_base, gratificacao, imposto, salario_final;
	setlocale(LC_ALL,"");

	std::cout << "Insira o valor do seu salário base: \nR$";
	std::cin >> salario_base;
	
	gratificacao = salario_base * 0.05;
	imposto = salario_base * 0.07;
	
	salario_final = salario_base + gratificacao - imposto;
	
	std::cout << "\n[$] DADOS SALARIAIS:\n - Salário base: R$ " << salario_base << "\n - Gratificação: R$ " << gratificacao << "\n - Impostos: R$ " << imposto << "\n - Salário final: R$ " << salario_final;
	
	
	return 0;
	
};
