#include <iostream>
using namespace std;

class Unit {
public:
    int HP;
    int dmg;
    virtual void atak(Unit* target) = 0;
};
class player :public Unit {
public:
    player(int = 100, int = 10);
    int is_dead();
    void heal();
    virtual void atak(Unit* target) override;
    virtual void show_stats();
};
class monster :public Unit {
public:
    monster(int = 50, int = 5);
    int is_dead();
    virtual void atak(Unit* target) override;
    virtual void show_stats();
};
class zombie :public monster {

};
class chest {
public:
    chest(int = 15, int = 10);
    int buff;
    int zdr;
    virtual void obr(Unit* target);
};
class trap {
public:
    trap(int = 15);
    int dmg;
    virtual void obr(Unit* target);
};
class trap_chest :public chest {
    int dmg;
};
class dart_trap :public trap {
    int dmg;
};
class mud_trap :public trap {
    int dmg;
};
