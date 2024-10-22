#include "transformer.hpp"

Transformer :: Transformer()
{
    hp = 100;
    lvl = 0;
    fuel = 100;
    ammo = 50;
}

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

