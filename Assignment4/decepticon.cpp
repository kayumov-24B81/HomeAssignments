/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Decepticon class. Contains definition of all Decepticon class methods.
*/
#include "decepticon.hpp"

Decepticon :: Decepticon(Gun g, float toughness) : Transformer(g, toughness)
{
    can_fly = true;
    is_upgraded = false;
}

Decepticon :: Decepticon() : Transformer()
{
    can_fly = true;
    is_upgraded = false;
}


Decepticon :: ~Decepticon()
{
    std :: cout << "Decepticon object destructor executed succesfully" << std :: endl;
}

bool Decepticon :: get_is_upgraded() const
{
    return is_upgraded;
}

bool Decepticon :: get_can_fly() const
{
    return can_fly;
}

void Decepticon :: set_is_upgraded(bool upgrade_state)
{
    is_upgraded =  upgrade_state;
}

bool Decepticon :: upgrade()
{
    if(not(is_upgraded))
    {
        set_damage(get_damage() + 10);
        set_hp(get_hp() - 20);
        set_is_upgraded(true);
        return true;
    }
    
    return false;
}

std :: ostream & operator<<(std :: ostream & os, const Decepticon & transformer)
{
    std :: string is_flying = "yes";
    std :: string can_be_upgraded = "yes";
    
    if(transformer.get_is_upgraded())
    {
        can_be_upgraded = "no";
    }

    
    return os << "model: decepticon" << std :: endl << "current hp: " << transformer.get_hp() << std :: endl <<  "current lvl: " << transformer.get_lvl() << std :: endl << "current fuel: " << transformer.get_fuel() << std :: endl << "current ammo: " << transformer.get_ammo() << std :: endl << "current damage: " << transformer.get_damage() << std :: endl << "can fly: " << is_flying << std :: endl << "can be upgraded: " << can_be_upgraded;
}
