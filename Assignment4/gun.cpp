/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Gun class. Contains definition of all Gun class methods.
*/
#include "gun.hpp"
#include <iostream>

Gun :: Gun(unsigned dmg)
{
    damage = dmg;
}

Gun :: Gun()
{
    damage = 10;
}

Gun :: ~Gun()
{
    std :: cout << "Gun object destructor executed succesfully" << std :: endl;
}

unsigned Gun :: get_damage() const
{
    return damage;
}

void Gun :: set_damage(unsigned dmg)
{
    damage = dmg;
    std :: cout << "Damage changed succesfully to " << damage << std :: endl;
}

std :: ostream & operator<<(std :: ostream & os, const Gun & weapon)
{
    return os << "current damage: " << weapon.get_damage();
}
