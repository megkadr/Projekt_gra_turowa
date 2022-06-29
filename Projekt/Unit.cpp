#include <iostream>
#include "Unit.h"

void player::attack(Unit* target)
{
	target->HP -= dmg;
	std::cout << "Atakujesz potwora za:" << " " << dmg << std::endl << std::endl;
	if (target->HP <= 0)
	{
		std::cout << "potwor nie zyje" << std::endl;
	}
}

int player::is_dead() const
{
	if (player::HP > 0)
	{
		return 1;
	}
	else
		return 0;
}

void player::heal()
{
	std::cout << "leczysz sie za:" << " " << dmg << std::endl;
	HP = HP + dmg;
}

void player::show_stats()
{
	std::cout << "Staty gracza:" << std::endl;
	std::cout << "HP:" << " " << HP << std::endl;
	std::cout << "Dmg:" << " " << dmg << std::endl << std::endl;
}

void monster::attack(Unit* target)
{
	target->HP -= dmg;
	std::cout << "Potwor atakuje za:" << " " << dmg << std::endl << std::endl;
	if (target->HP <= 0)
	{
		std::cout << "nie zyjesz" << std::endl;
	}
}

int monster::is_dead()
{
	if (monster::HP > 0)
	{
		return 1;
	}
	else
		return 0;
}

void monster::show_stats()
{
	std::cout << "Staty potwora:" << std::endl;
	std::cout << "HP:" << " " << HP << std::endl;
	std::cout << "Dmg:" << " " << dmg << std::endl << std::endl;
}

player::player(int hp, int d)
{
	HP = hp;
	dmg = d;
}

monster::monster(int hp1, int d1)
{
	HP = hp1;
	dmg = d1;
}

trap::trap(int d2)
{
	dmg = d2;
}

void trap::obr(Unit* target)
{
	target->HP -= dmg;
	std::cout << "Otrzymujesz obrazenia od pulapki w wysokosci:" << " " << dmg << std::endl << std::endl;
}

chest::chest(int buff2, int zdr2)
{
	buff = buff2;
	zdr = zdr2;
}

void chest::obr(Unit* target)
{
	target->HP += zdr;
	std::cout << "Otrzymujesz z skrzyni leczenie w wysokosci:" << " " << zdr << std::endl << std::endl;
}
