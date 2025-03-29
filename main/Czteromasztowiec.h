#pragma once
#include "Statek.h"

//bool zniszczony; // gdy wszystkie modó³y bêd¹ zniszczone statek zmieni kolor na czerwony
//
//int oznaczenie; // dla czteromasztowca = 4, trójmasztowca = 3, itd.
//
//std::vector<std::pair<bool, std::pair<int, char>>> dane;
class Czteromasztowiec:public Statek
{
	const static int rozmiar = 4;

	std::vector<std::vector<std::pair<bool, std::pair<int, char>>>> moduly;

public:

	Czteromasztowiec(int& a_wiersz, char& a_kolumna, std::vector<std::vector<std::pair<bool, std::pair<int, char>>>>& moduly);

};

