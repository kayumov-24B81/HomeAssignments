#include "gun.hpp"

Gun :: Gun(unsigned dmg)
{
    damage = dmg;
}

Gun :: Gun()
{
    damage = 10;
}

unsigned Gun :: get_damage()
{
    return damage;
}

Gun :: ~Gun;


