/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Armor class. Contains definition of all Armor class methods.
*/
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

float Armor :: get_toughness() const
{
    return toughness;
}

