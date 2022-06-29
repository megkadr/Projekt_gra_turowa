#include <iostream>
#include <string>
#include "Unit.h"


int main()
{
	player r1;
	monster r2;
	chest r3;
	trap r4;
	std::string x = "x";

	std::cout <<
		"Jako gracz podaj czy chcesz zaatakowac potwora czy dodac sobie 10HP, wpisz atak by uderzyc lub heal by dodac HP. Mozesz tez wpisac chest by otworzyc skrzynie w przypadku niepoprawnej akcji natrafisz na pulapke"
		<< std::endl;
	while (r1.is_dead() > 0 || r2.is_dead() > 0)
	{
		r1.show_stats();
		r2.show_stats();
		std::cout << "Co chcesz zrobic" << std::endl;
		std::cin >> x;
		if (x == "atak")
		{
			r1.attack(&r2);
		}
		else if (x == "heal")
		{
			r1.heal();
		}
		else if (x == "chest")
		{
			r3.obr(&r1);
		}
		else if (x != "trap" || x != "atak" || x != "heal")
		{
			r4.obr(&r1);
		}
		r2.attack(&r1);
	}
	std::cout << "Koniec walki";
}
