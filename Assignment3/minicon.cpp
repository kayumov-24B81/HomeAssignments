/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Minicon class. Contains definition of all Minicon class methods.
*/
#include <iostream>
#include "minicon.hpp"

Minicon :: Minicon(Gun g, float toughness) : Transformer(g, toughness)
{
    can_fly = true;
    battle_mode = true;
}

Minicon :: Minicon() : Transformer()
{
    can_fly = true;
    battle_mode = true;
}

Minicon :: ~Minicon()
{
    std :: cout << "Minicon object destructor executed succesfully" << std :: endl;
}

bool Minicon :: get_can_fly()
{
    return can_fly;
}

bool Minicon :: get_battle_mode()
{
    return battle_mode;
}

void Minicon :: set_can_fly(bool fly)
{
    can_fly = fly;
}

void Minicon :: set_battle_mode(bool mode)
{
    battle_mode = mode;
}

void Minicon :: change_mode()
{
    if(battle_mode)
    {
        set_damage(get_damage() - 5);
        set_fuel(get_fuel() + 30);
        set_hp(get_hp() - 20);
        set_can_fly(false);
        set_battle_mode(false);
        std :: cout << "Minicon quitted battle mode succesfully" << std :: endl;
    }
    else
    {
        set_damage(get_damage() + 5);
        set_fuel(get_fuel() - 40);
        set_hp(get_hp() + 40);
        set_can_fly(true);
        set_battle_mode(true);
        std :: cout << "Minicon entered battle mode succesfully" << std :: endl;
    }
}
