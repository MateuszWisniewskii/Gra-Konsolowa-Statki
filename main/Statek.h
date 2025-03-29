#pragma once
#include <string>
#include <vector>
#include <utility>
//Ile statków narysowaæ ?
//Na planszach 10 na 10 przyjmuje siê, ¿e ka¿dy z graczy dysponuje flot¹ z³o¿on¹ z :
//jednego czteromasztowca o wielkoœci czterech kratek
//dwóch trójmasztowców o wielkoœci trzech kratek
//trzech dwumasztowców o wielkoœci dwóch kratek
//czterech jednomasztowców o wielkoœci jednej kratki.
class Statek
{
	bool zniszczony; // gdy wszystkie modó³y bêd¹ zniszczone statek zmieni kolor na czerwony

	int oznaczenie; // dla czteromasztowca = 4, trójmasztowca = 3, itd.

	std::vector<std::pair<bool, std::pair<int, char>>> dane; //modu³y<stan,<wiersz modu³u,kolumna modu³u>>
	                                                                //stan=> ZNISZNONY=1 CA£Y, 
public:                                                             //B¥D NIE ZNISZCZONY W CA£OŒCI=0

	Statek(int& a_wiersz, char& a_kolumna, std::vector<std::pair<bool, std::pair<int, char>>>& dane);

};

