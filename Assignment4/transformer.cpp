/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Transformer class. Contains definition of all Transformer class methods.
*/
#include "transformer.hpp"

Transformer :: Transformer(Gun g, float toughness)
{
    gun = g;
    Armor arm(toughness);
    armor = arm;
    hp = 100 * armor.get_toughness();
    lvl = 0;
    fuel = 100;
    ammo = 20;
}

Transformer :: Transformer()
{
    Gun g;
    Armor arm;
    gun = g;
    armor = arm;
    hp = 100 * armor.get_toughness();
    lvl = 0;
    fuel = 100;
    ammo = 20;
}

Transformer :: ~Transformer()
{
    std :: cout << "Transformer object destructor executed succesfully" << std :: endl;
}

float Transformer :: get_hp() const
{
    return hp;
}

unsigned Transformer :: get_lvl() const
{
    return lvl;
}

unsigned Transformer :: get_fuel() const
{
    return fuel;
}

unsigned Transformer :: get_ammo() const
{
    return ammo;
}

unsigned Transformer :: get_damage() const
{
    return gun.get_damage();
}

void Transformer :: set_hp(float health)
{
    hp = health;
}

void Transformer :: set_damage(unsigned dmg)
{
    gun.set_damage(dmg);
}

void Transformer :: set_fuel(unsigned fl)
{
    fuel = fl;
}

void Transformer :: lvl_up()
{
    lvl = lvl + 1;
}

void Transformer :: lvl_up(unsigned lvl_plus)
{
    lvl += lvl_plus;
}

bool Transformer :: fire()
{
    if(ammo != 0)
    {
        --ammo;
        return true;
    }
    else
    {
       return false;
    }
}

void Transformer :: reload()
{
    ammo = 20;
}

std :: ostream & operator<<(std :: ostream & os, const Transformer &transformer)
{
    return os << "model: transformer "<< std :: endl << "current hp: " << transformer.get_hp() << std :: endl <<  "current lvl: " << transformer.get_lvl() << std :: endl << "current fuel: " << transformer.get_fuel() << std :: endl << "current ammo: " << transformer.get_ammo() << std :: endl << "current damage: " << transformer.get_damage();
}

