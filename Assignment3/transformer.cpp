#include "transformer.hpp"
#include "iostream"

Transformer :: Transformer(Gun g)
{
    gun = g;
    hp = 100;
    lvl = 0;
    fuel = 100;
    ammo = 20;
}

Transformer :: Transformer()
{
    Gun g;
    gun = g;
    hp = 100;
    lvl = 0;
    fuel = 100;
    ammo = 20;
}

Transformer :: ~Transformer();

unsigned Transformer :: get_hp()
{
    return hp;
}

unsigned Transformer :: get_lvl()
{
    return lvl;
}

unsigned Transformer :: get_fuel()
{
    return fuel;
}

unsigned Transformer :: get_ammo()
{
    return ammo;
}

unsigned Transformer :: get_damage()
{
    return gun.get_damage();
}

void Transformer :: lvl_up()
{
    ++lvl;
}

void Transformer :: lvl_up(unsigned lvl_plus)
{
    lvl += lvl_plus;
}

bool Transformer :: fire()
{
    if(ammo != 0)
    {
        --ammo;
        return true;
    }
    else
    {
       return false;
    }
}

void Transformer :: reload()
{
    ammo = 20;
}

void Transformer :: get_stats()
{
     std :: cout << "damage: " << gun.get_damage() << std :: endl;
     std :: cout << "hp left: " << hp << std :: endl;
     std :: cout << "current level: " << lvl << std :: endl;
     std :: cout << "fuel: " << fuel << std :: endl;
     std :: cout << "ammo: " << ammo << "/20" << std :: endl;
}
    
