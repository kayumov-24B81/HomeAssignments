/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Minicon class. Contains definition of all Minicon class methods.
*/
#include "minicon.hpp"

Minicon :: Minicon(Gun g, float toughness, bool fire_resistance) : Transformer(g, toughness, fire_resistance)
{
    _can_dual_wield = true;
    _battle_mode = true;
}

Minicon :: Minicon() : Transformer()
{
    _can_dual_wield = true;
    _battle_mode = true;
}

Minicon :: ~Minicon()
{
    std :: cout << "Minicon object destructor executed succesfully" << std :: endl;
}

bool Minicon :: get_can_dual_wield() const
{
    return _can_dual_wield;
}

bool Minicon :: get_battle_mode() const
{
    return _battle_mode;
}

void Minicon :: set_can_dual_wield(bool can_dual_wield)
{
    _can_dual_wield = can_dual_wield;
}

void Minicon :: set_battle_mode(bool battle_mode)
{
    _battle_mode = battle_mode;
}

void Minicon :: change_mode()
{
    if(_battle_mode)
    {
        set_damage(get_damage() - 5);
        set_fuel(get_fuel() + 30);
        set_hp(get_hp() - 20);
        set_can_dual_wield(false);
        set_battle_mode(false);
        std :: cout << "Minicon quitted battle mode succesfully" << std :: endl;
    }
    else
    {
        set_damage(get_damage() + 5);
        set_fuel(get_fuel() - 40);
        set_hp(get_hp() + 40);
        set_can_dual_wield(true);
        set_battle_mode(true);
        std :: cout << "Minicon entered battle mode succesfully" << std :: endl;
    }
}

std :: ostream & operator<<(std :: ostream & os, const Minicon & transformer)
{
    std :: string can_dual_wield = "yes";
    std :: string current_mode = "battle mode";
    
    if(not(transformer.get_battle_mode()))
    {
        current_mode = "peaceful mode";
        can_dual_wield = "no";
    }

    
    return os << "model: minicon" << std :: endl << "current hp: " << transformer.get_hp() << std :: endl <<  "current lvl: " << transformer.get_lvl() << std :: endl << "current fuel: " << transformer.get_fuel() << std :: endl << "current ammo: " << transformer.get_ammo() << std :: endl << "current damage: " << transformer.get_damage() << std :: endl << "can wield two meele weapons: " << can_dual_wield << std :: endl << "current mode: " << current_mode;
}
