#include <iostream>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"");
	
	double altura_degrau, altura_desejada, total_degraus;
	
	std::cout << "Qual a altura de cada degrau (em centímetros)?\n";
	std::cin >> altura_degrau;
	
	std::cout << "\nQuantos metros deseja subir (em metros)?\n";
	std::cin >> altura_desejada;
	
	total_degraus = altura_degrau * 100 / altura_desejada;
	
	std::cout << "\nVocê precisará subir " << total_degraus << " degraus";
	
	return 0;
}
