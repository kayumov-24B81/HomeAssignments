/* Kayumov Airat st128100@student.spbu.ru
   transformers. .hpp file or Transformer class. Contains declaration of all Transformer class methods and fields. Transformer is parent class for Decepticon Minicon and Autobot classes. Constructors for child functions use Transfromer constructor and just adjust their own fields. All necessary private information is changed through corresponding set functions.
*/
#ifndef TRANSFORMERS
#define TRANSFORMERS

#include "gun.hpp"
#include "armor.hpp"

class Transformer
{
private:
    Armor _armor;
    Gun _gun;
    unsigned _hp;
    unsigned _lvl;
    unsigned _fuel;
    unsigned _ammo;

public:
    Transformer(Gun g, float toughness, bool fire_resistance);
    Transformer();
    virtual ~Transformer();
    float get_hp() const;
    unsigned get_lvl() const;
    unsigned get_fuel() const;
    unsigned get_ammo() const;
    unsigned get_damage() const;
    bool get_fire_resistance() const;
    void set_damage(unsigned damage);
    void set_hp(float hp);
    void set_fuel(unsigned fuel);
    void lvl_up(unsigned lvl);
    void lvl_up();
    bool fire();
    void reload();
    virtual bool transform();
    virtual bool self_destruction();
    virtual bool call_reinforcements();

};

std :: ostream & operator<<(std :: ostream & os, const Transformer & transformer);

bool operator>(Transformer & transformer1, Transformer & transformer2);
bool operator<(Transformer & transformer1, Transformer & transformer2);

#endif
