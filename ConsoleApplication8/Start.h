#pragma once

#include <utility>
#include <iostream>
#include <string>
#include <locale.h>



void start()
{
	bool dane(int, int);
	int wspolczynnik=0, wykladnik=0;
	setlocale(LC_ALL, "");
	std::cout << "Menu funkcji, wprowad� komend�:" << std::endl;
	std::cout << "A=     Ci�g par zako�czony par� 0 0 - definicja wielomianu" << std::endl;
	std::cout << "A=B+C  Sumowanie" << std::endl;
	std::cout << "A=B-C  Odejmowanie" << std::endl;
	std::cout << "A=B*C  Mno�enie" << std::endl;
	std::cout << "A=B'   Ro�niczkowanie" << std::endl;
	std::cout << "A?     Wydruk wielomianu" << std::endl;
	std::cout << "A(a)   Warto�� wielomianu dla x=a" << std::endl;
	std::cout << "A#     Usuwanie wielomianu" << std::endl;
	std::cout << "M!     Poka� menu" << std::endl;
	std::cout << "#      Koniec" << std::endl;
	std::cout << "--------------------" << std::endl;

	dane(wspolczynnik, wykladnik);

}

void dane()
{


}
