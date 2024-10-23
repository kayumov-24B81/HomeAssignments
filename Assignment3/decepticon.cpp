#include "decepticon.hpp"
#include <iostream>

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

bool Decepticon :: upgrade()
{
    if(not(is_upgraded))
    {
        set_damage(get_damage() + 10);
        set_hp(get_hp() - 20);
        is_upgraded = true;
        return true;
    }
    
    return false;
}

