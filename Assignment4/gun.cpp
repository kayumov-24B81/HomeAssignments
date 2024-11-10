/* Kayumov Airat st128100@student.spbu.ru
   transformers. .cpp file or Gun class. Contains definition of all Gun class methods.
*/
#include "gun.hpp"
#include <iostream>

Gun :: Gun(unsigned damage)
{
    _damage = damage;
}

Gun :: Gun()
{
    _damage = 10;
}

Gun :: ~Gun()
{
    std :: cout << "Gun object destructor executed succesfully" << std :: endl;
}

unsigned Gun :: get_damage() const
{
    return _damage;
}

void Gun :: set_damage(unsigned damage)
{
    _damage = damage;
}

std :: ostream & operator<<(std :: ostream & os, const Gun & gun)
{
    return os << "current damage: " << gun.get_damage();
}
