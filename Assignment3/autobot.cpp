#include <iostream>
#include "autobot.hpp"

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

bool Autobot :: repair()
{
     if(not(is_repaired))
     {
         set_hp(get_hp() + 20);
         set_fuel(get_fuel() - 20);
         return true;
     }
     
     return false;
}
