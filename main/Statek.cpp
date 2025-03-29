#include "Statek.h"

//stan=> ZNISZNONY=1, A CA£Y, B•Dè NIE ZNISZCZONY W CA£OåCI=0                                                                                 
Statek::Statek(int& a_wiersz, char& a_kolumna, std::vector<std::pair<bool, std::pair<int, char>>>& dane)
{
	dane[0].first = 0;
	dane[0].second.first = a_wiersz;
	dane[0].second.second = a_kolumna;
}
