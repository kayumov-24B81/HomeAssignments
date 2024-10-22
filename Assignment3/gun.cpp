#include "gun.hpp"
#include <iostream>

Gun :: Gun(unsigned dmg)
{
    damage = dmg;
}

Gun :: Gun()
{
    damage = 10;
}

Gun :: ~Gun()
{
    std :: cout << "Gun object destructor executed succesfully" << std :: endl;
}

unsigned Gun :: get_damage()
{
    return damage;
}


