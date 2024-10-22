#include "gun.hpp"

Gun :: Gun()
{
    damage = 1;
    ammo_consumption = 5;
}

unsigned Gun :: get_damage()
{
    return damage;
}

unsigned Gun :: get_ammo_consumption()
{
    return ammo_consumption;
}

