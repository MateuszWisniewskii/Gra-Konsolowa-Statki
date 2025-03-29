#pragma once
#include <string>
#include <vector>
#include <utility>
//Ile statk�w narysowa� ?
//Na planszach 10 na 10 przyjmuje si�, �e ka�dy z graczy dysponuje flot� z�o�on� z :
//jednego czteromasztowca o wielko�ci czterech kratek
//dw�ch tr�jmasztowc�w o wielko�ci trzech kratek
//trzech dwumasztowc�w o wielko�ci dw�ch kratek
//czterech jednomasztowc�w o wielko�ci jednej kratki.
class Statek
{
	bool zniszczony; // gdy wszystkie mod�y b�d� zniszczone statek zmieni kolor na czerwony

	int oznaczenie; // dla czteromasztowca = 4, tr�jmasztowca = 3, itd.

	std::vector<std::pair<bool, std::pair<int, char>>> dane; //modu�y<stan,<wiersz modu�u,kolumna modu�u>>
	                                                                //stan=> ZNISZNONY=1 CA�Y, 
public:                                                             //B�D� NIE ZNISZCZONY W CA�O�CI=0

	Statek(int& a_wiersz, char& a_kolumna, std::vector<std::pair<bool, std::pair<int, char>>>& dane);

};

