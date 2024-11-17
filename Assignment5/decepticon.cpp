/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Decepticon class. Contains definition of all Decepticon class methods.
*/
#include "decepticon.hpp"

Decepticon :: Decepticon(Gun g, float toughness, bool fire_resistance) : Transformer(g, toughness, fire_resistance)
{
    _can_makedonian_shooting = false;
    _is_upgraded = false;
}

Decepticon :: Decepticon() : Transformer()
{
    _can_makedonian_shooting = false;
    _is_upgraded = false;
}


Decepticon :: ~Decepticon()
{
    std :: cout << "Decepticon object destructor executed succesfully" << std :: endl;
}

bool Decepticon :: get_is_upgraded() const
{
    return _is_upgraded;
}

bool Decepticon :: get_can_makedonian_shooting() const
{
    return _can_makedonian_shooting;
}

void Decepticon :: set_is_upgraded(bool is_upgraded)
{
    _is_upgraded =  is_upgraded;
}

void Decepticon :: set_can_makedonian_shooting(bool can_makedonian_shooting)
{
    _can_makedonian_shooting =  can_makedonian_shooting;
}

bool Decepticon :: upgrade()
{
    if(not(_is_upgraded))
    {
        set_damage(get_damage() + 10);
        set_hp(get_hp() - 20);
        set_is_upgraded(true);
        set_can_makedonian_shooting(true);
        return true;
    }

    return false;
}

bool Decepticon :: transform()
{
    std :: cout << "transform() called by Decepticon object" << std :: endl;
    return true;
}

bool Decepticon :: self_destruction()
{
    std :: cout << "self_destruction() called by Decepticon object" << std :: endl;
    return true;
}

bool Decepticon :: call_reinforcements()
{
    std :: cout << "call_reinforcements() called by Decepticon object" << std :: endl;
    return true;
}

std :: ostream & operator<<(std :: ostream & os, const Decepticon & transformer)
{
    std :: string can_makedonian_shooting = "no";
    std :: string can_be_upgraded = "yes";

    if(transformer.get_is_upgraded())
    {
        can_be_upgraded = "no";
        can_makedonian_shooting = "yes";
    }

    return os << "model: decepticon" << std :: endl << "current hp: " << transformer.get_hp() << std :: endl <<  "current lvl: " << transformer.get_lvl() << std :: endl << "current fuel: " << transformer.get_fuel() << std :: endl << "current ammo: " << transformer.get_ammo() << std :: endl << "current damage: " << transformer.get_damage() << std :: endl << "can shoot with two hands: " << can_makedonian_shooting << std :: endl << "can be upgraded: " << can_be_upgraded;
}
