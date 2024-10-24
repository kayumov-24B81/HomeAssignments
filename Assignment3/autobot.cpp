/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Autobot class. Contains definition of all Armor class methods.
*/
#include <iostream>
#include "autobot.hpp"


Autobot :: Autobot(Gun g, float toughness) : Transformer(g, toughness)
{
    can_fly = false;
    is_repaired = false;
}

Autobot :: Autobot() : Transformer()
{
    can_fly = false;
    is_repaired = false;
}


Autobot :: ~Autobot()
{
    std :: cout << "Autobot object destructor executed succesfully" << std :: endl;
}

bool Autobot :: get_can_fly()
{
    return can_fly;
}

bool Autobot :: get_repaired()
{
    return is_repaired;
}

void Autobot :: set_repaired(bool repaired_stat)
{
    is_repaired = repaired_stat;
}

bool Autobot :: repair()
{
     if(not(is_repaired))
     {
         set_hp(get_hp() + 20);
         set_fuel(get_fuel() - 20);
         set_repaired(true);
         return true;
     }

     return false;
}
