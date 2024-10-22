#include "armor.hpp"
#include <iostream>

Armor :: Armor(float arm_tough)
{
    toughness = arm_tough;
}

Armor :: Armor()
{
    toughness = 1;
}

Armor :: ~Armor()
{
    std :: cout << "Armor object destructor executed succesfully" << std :: endl;
}

float Armor :: get_toughness()
{
    return toughness;
}

