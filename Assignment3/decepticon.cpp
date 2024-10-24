/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Decepticon class. Contains definition of all Decepticon class methods.
*/
#include "decepticon.hpp"
#include <iostream>

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

bool Decepticon :: get_upgrade()
{
    return is_upgraded;
}

bool Decepticon :: get_can_fly()
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

