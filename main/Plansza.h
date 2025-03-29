#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <vector>
#include <utility>
#include "Statek.h"
#include "Jednomasztowiec.h"
#include "Dwumasztowiec.h"
#include "Trojmasztowiec.h"
#include "Czteromasztowiec.h"

enum gracz { Gracz_1 = 1, Gracz_2 };

class Plansza
{
	const int rozmiar = 11;

	std::string moja_plansza[11][11]; 	//std::string* plansza = new std::string[rozmiar][rozmiar]; //delete[] plansza;
	
	std::string plansza_do_ataku[11][11];

	gracz nr_gracza;

	std::vector<Statek*> flota;


public:

	Plansza(gracz nr);

	void pokaz_plansze();

	void ustaw_statki(std::vector<Statek*>& a_flota);

	void atakuj();

	

};

