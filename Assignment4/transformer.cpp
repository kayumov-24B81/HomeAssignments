/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Transformer class. Contains definition of all Transformer class methods.
*/
#include "transformer.hpp"

Transformer :: Transformer(Gun gun, float toughness, bool fire_resistance)
{
    _gun = gun;
    Armor armor(toughness, fire_resistance);
    _armor = armor;
    _hp = 100 * armor.get_toughness();
    _lvl = 0;
    _fuel = 100;
    _ammo = 20;
}

Transformer :: Transformer()
{
    Gun gun;
    Armor armor;
    _gun = gun;
    _armor = armor;
    _hp = 100 * armor.get_toughness();
    _lvl = 0;
    _fuel = 100;
    _ammo = 20;
}

Transformer :: ~Transformer()
{
    std :: cout << "Transformer object destructor executed succesfully" << std :: endl;
}

float Transformer :: get_hp() const
{
    return _hp;
}

unsigned Transformer :: get_lvl() const
{
    return _lvl;
}

unsigned Transformer :: get_fuel() const
{
    return _fuel;
}

unsigned Transformer :: get_ammo() const
{
    return _ammo;
}

unsigned Transformer :: get_damage() const
{
    return _gun.get_damage();
}

bool Transformer :: get_fire_resistance() const
{
    return _armor.get_fire_resistance();
}


void Transformer :: set_hp(float hp)
{
    _hp = hp;
}

void Transformer :: set_damage(unsigned damage)
{
    _gun.set_damage(damage);
}

void Transformer :: set_fuel(unsigned fuel)
{
    _fuel = fuel;
}

void Transformer :: lvl_up()
{
    _lvl += 1;
}

void Transformer :: lvl_up(unsigned lvl)
{
    _lvl += lvl;
}

bool Transformer :: fire()
{
    if(_ammo != 0)
    {
        --_ammo;
        return true;
    }
    else
    {
       return false;
    }
}

void Transformer :: reload()
{
    _ammo = 20;
}

std :: ostream & operator<<(std :: ostream & os, const Transformer &transformer)
{
    return os << "model: transformer "<< std :: endl << "current hp: " << transformer.get_hp() << std :: endl <<  "current lvl: " << transformer.get_lvl() << std :: endl << "current fuel: " << transformer.get_fuel() << std :: endl << "current ammo: " << transformer.get_ammo() << std :: endl << "current damage: " << transformer.get_damage();
}

