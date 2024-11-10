/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Armor class. Contains definition of all Armor class methods.
*/
#include "armor.hpp"
#include <iostream>

Armor :: Armor(float toughness, bool fire_resistance)
{
    _toughness = toughness;
    _fire_resistance = fire_resistance;
}

Armor :: Armor()
{
    _toughness = 1;
    _fire_resistance = false;
}

Armor :: ~Armor()
{
    std :: cout << "Armor object destructor executed succesfully" << std :: endl;
}

float Armor :: get_toughness() const
{
    return _toughness;
}

bool Armor :: get_fire_resistance() const
{
    return _fire_resistance;
}

