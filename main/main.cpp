#include "Plansza.h"
#include "Statek.h"
#include "Jednomasztowiec.h"
#include "Dwumasztowiec.h"
#include "Trojmasztowiec.h"
#include "Czteromasztowiec.h"
#include <iostream>
#include <windows.h>
#include <stdlib.h>

void line(int len, char c = '*')
{
    for (int i = 0; i < len; i++)
        std::cout << c;
}

int main()
{
    std::cout << "Hello World!\n";

    Plansza Pole_bitwy_1(Gracz_1);
    Pole_bitwy_1.pokaz_plansze();
    //Pole_bitwy_1.ustaw_statki();
    //Plansza Pole_bitwy_2(Gracz_2);
    //Pole_bitwy_2.ustaw_statki();
    //Pole_bitwy_1.atakuj();


    

    //nic ważnego tylko sprawdzałem działanie funkcji line
    {
        //int dlugosc = 13;
        //line(dlugosc); // wypiszą się gwiazdki
        //std::cout << std::endl;
        //line(dlugosc, '*'); // wypiszą się gwiazdki
        //line(dlugosc, 'r'); // wypiszą się erki ==> rrrrrrrrrr
    }
    // znowu nic ważnego, jakieś pierdoły z wpisywanie i wypisywaniem
    {
        //char text[] = "Hello World!";

        //for (auto& c : text)
        //    c = toupper(c);
        //for (auto c : text)
        //   std::cout << c;
        //std::cout << std::endl;
        //for (const auto x : { 2, 0, 1, 6 }) 
        //    std::cout << x;
        //std::cout << std::endl;

        //std::cout << "+++++++++++++++++++++++++++++" << std::endl;
        //int x, y;
        //std::cin >> x >> y;
        //std::cout << "\n" << std::endl << x << y << std::endl;
    }

    // Kolorowanie napisów
    {
        HANDLE hOut;

        hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        std::cout << "Standart" << std::endl << std::endl;
        std::cout << "by DrraVen" << std::endl;
        std::cout << "Zycze milych prac z c++" << std::endl;
        //Standardowy ^
        SetConsoleTextAttribute(hOut, BACKGROUND_RED);
        std::cout << "Ten napis jest z cerwonycm tlem i zwykłym tekstem" << std::flush << std::endl << std::endl;
        //Tło ^
        SetConsoleTextAttribute(hOut, BACKGROUND_GREEN);
        std::cout << "Ten napis ma zielone tlo" << std::flush << std::endl;
        //Tło2 ^
        SetConsoleTextAttribute(hOut, FOREGROUND_RED);
        std::cout << "Ten napis jest czerwony bez tla" << std::endl;
        //Napis ^
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN);
        std::cout << "Ten napis jest zielony" << std::endl << std::endl;
        //Napis2 ^
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE);
        std::cout << "Ten napis jest niebieski" << std::endl << std::endl;
        //Napis3 ^
        SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
        std::cout << "Ten napis jest zielony i [i]INTENSITY[/i]" << std::endl;
        //Intesywny ^
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        std::cout << "Ten napis jest zielony i [i]INTENSITY[/i]" << std::endl;
        //Intesywny2 ^
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "Ten napis jest niebieski i [i]INTENSITY[/i]" << std::endl;
        //inne kolory ^
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
        std::cout << "Ten napis jest fioletowy'" << std::endl;
        //inne kolory ^
        SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
        std::cout << "Ten napis jest fioletowy i intesywny" << std::endl;
        //inne kolory + intesywność ^
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED);
        std::cout << "Ten napis jest [i]ala[/i] zloty " << std::endl;
        //inne kolory2 ^
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
        std::cout << "Ten napis jest bardzije podobny do zlotego bo ma intesywnosc" << std::endl;
        //inne kolory 2 + intesywność ^
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "Ten napis jest seledynowy, bo jest intesywny" << std::endl;
        //inne kolory3 + intesywność ^
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE);
        std::cout << "Ten napis jest matowy bo nie ma intesywnosci" << std::endl;
        //inne kolory3 ^
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
        std::cout << "Mozna powiedzieć ze ten napis jest standartowy" << std::endl;
        //inne kolory4 ^
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
        std::cout << "Ten napis jest srebny bo ma intesywnosc" << std::endl;
        //inne kolory4 + intesywność ^
        // endl;
        std::cout << "" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "" << std::endl;
        // endl;
        SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
        //system("PAUSE");
    }
    

}

