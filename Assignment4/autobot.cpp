/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Autobot class. Contains definition of all Armor class methods.
*/
#include "autobot.hpp"
#include <cstring>


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

bool Autobot :: get_can_fly() const
{
    return can_fly;
}

bool Autobot :: get_is_repaired() const
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

std :: ostream & operator<<(std :: ostream & os, const Autobot & transformer)
{
    std :: string is_flying = "no";
    std :: string can_be_repaired = "yes";
    
    if(transformer.get_is_repaired())
    {
        can_be_repaired = "no";
    }
    
    return os << "model: autobot" << std :: endl << "current hp: " << transformer.get_hp() << std :: endl <<  "current lvl: " << transformer.get_lvl() << std :: endl << "current fuel: " << transformer.get_fuel() << std :: endl << "current ammo: " << transformer.get_ammo() << std :: endl << "current damage: " << transformer.get_damage() << std :: endl << "can fly: " << is_flying << std :: endl << "can be repaired: " << can_be_repaired;
}    

    
    
