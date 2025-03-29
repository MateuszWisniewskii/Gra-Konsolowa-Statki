#include "Plansza.h"

// \ A	 B	 C	 D	 E	 F	 G	 H	 I	 J
// 1 []  []  []  []  []  []  []  []  []  []
// 2 []  []  []  []  []  []  []  []  []  []
// 3 []  []  []  []  []  []  []  []  []  []
// 4 []  []  []  []  []  []  []  []  []  []
// 5 []  []  []  []  []  []  []  []  []  []
// 6 []  []  []  []  []  []  []  []  []  []
// 7 []  []  []  []  []  []  []  []  []  []
// 8 []  []  []  []  []  []  []  []  []  []
// 9 []  []  []  []  []  []  []  []  []  []
// 10[]  []  []  []  []  []  []  []  []  []

Plansza::Plansza(gracz nr): nr_gracza(nr)
{
	moja_plansza[0][0] = "\\ "; // ustawienie backslasha, ¿eby siê odró¿nia³o

	for (int w = 1; w < rozmiar; w++) // numeracja wierszy planszy
	{
		moja_plansza[w][0] = std::to_string(w);
	}
	
	char litera = 'A';

	for (int i = 1; i < rozmiar; i++) // nadawanie liter kolumn¹ planszy
	{
		moja_plansza[0][i] = litera;
		litera++;
	}

	for (int w = 1; w < rozmiar; w++)      // wype³nienie reszty planszy nawiasami,
	{                                      // aby zaznaczyc ¿e narazie nie umieszczono tam ¿adnego statku
		for (int k = 1; k < rozmiar; k++)
		{
			moja_plansza[w][k] = "[]";
		}
	}
}

void Plansza::atakuj()
{
}

void Plansza::pokaz_plansze()
{
	std::cout << "=====================" << std::endl;
	std::cout << "PLANSZA GRACZA NR: " << nr_gracza << std::endl;
	std::cout << "=====================" << std::endl;

	HANDLE hout;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	

	for (int w = 0; w < rozmiar; w++) 
	{
		for (int k = 0; k < rozmiar; k++)
		{
			if (k == 0 && w > 0 && w < rozmiar-1) //wypisywanie dodatkowej spacji po cyfrach do 10, dla estetyki
			{
				;
				std::cout << moja_plansza[w][k] << "  ";
			}
			else if(w == 0 && k > 0 && k < rozmiar) //wypisywanie dodatkowej spacji po literach, dla estetyki
			{
				std::cout << moja_plansza[w][k] << "  ";
			}
			else
			{
				SetConsoleTextAttribute(hout, FOREGROUND_RED);
				std::cout << moja_plansza[w][k] << " "; // wypisywanie ca³ej reszty tablicy
			}
		}
		std::cout << std::endl;
	}
	SetConsoleTextAttribute(hout, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void Plansza::ustaw_statki(std::vector<Statek*> & a_flota)
{
	//najpierw czteromasztowiec
	std::cout << "Podaj wspolzedne czteromasztowca: " << std::endl;

	Statek* p = new Czteromasztowiec();

	a_flota.push_back(p);

	//trójmasztowiec
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Podaj wspolzedne trojmasztowca nr" << i+1 << ": " << std::endl;

		Statek* p = new Trojmasztowiec();

		a_flota.push_back(p);
	}

	//dwomasztowiec
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Podaj wspolzedne dwumasztowca nr" << i + 1 << ": " << std::endl;

		Statek* p = new Dwumasztowiec();

		a_flota.push_back(p);
	}

	//jednomasztowiec
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Podaj wspolzedne jednomasztowca nr" << i + 1 << ": " << std::endl;

		Statek* p = new Jednomasztowiec();

		a_flota.push_back(p);
	}
}
