#include <iostream>
#include "Unit.h"

using namespace std;

void player::atak(Unit* target)
{
    target-> HP -= dmg;
    cout << "Atakujesz potwora za:" << " " << dmg << endl << endl;
    if (target->HP <= 0) {
        cout << "potwor nie zyje" << endl;
    }
}
int player::is_dead()
{
    if (player::HP > 0) {
        return 1;
    }
    else
        return 0;
}
void player::heal()
{
    cout << "leczysz sie za:" << " " << dmg << endl;
    HP = HP + dmg;
}
void player::show_stats()
{
    cout << "Staty gracza:" << endl;
    cout << "HP:" << " " << HP << endl;
    cout << "Dmg:" << " " << dmg << endl<<endl;
}
void monster::atak(Unit* target)
{
    target->HP -= dmg;
    cout << "Potwor atakuje za:" << " " << dmg << endl << endl;
    if (target->HP <= 0) {
        cout << "nie zyjesz" << endl;
    }
}
int monster::is_dead()
{
    if (monster::HP > 0) {
        return 1;
    }
    else
        return 0;
}
void monster::show_stats()
{
    cout << "Staty potwora:" << endl;
    cout << "HP:" << " " << HP << endl;
    cout << "Dmg:" << " " << dmg << endl<<endl;
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
    cout << "Otrzymujesz obrazenia od pulapki w wysokosci:" << " " << dmg << endl << endl;
}

chest::chest(int buff2, int zdr2)
{
    buff = buff2;
    zdr = zdr2;
}

void chest::obr(Unit* target)
{
    target->HP += zdr; 
    cout << "Otrzymujesz z skrzyni leczenie w wysokosci:" << " " << zdr << endl << endl;
}
