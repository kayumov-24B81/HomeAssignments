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
    Armor armor;
    Gun gun;
    unsigned hp;
    unsigned lvl;
    unsigned fuel;
    unsigned ammo;
    
public:
    Transformer(Gun g, float toughness);
    Transformer();
    ~Transformer();
    float get_hp();
    unsigned get_lvl();
    unsigned get_fuel();
    unsigned get_ammo();
    unsigned get_damage();
    void set_damage(unsigned dmg);
    void set_hp(float health);
    void set_fuel(unsigned fl);
    void lvl_up(unsigned lvl_plus);
    void lvl_up();
    bool fire();
    void reload();
    void get_stats();
};

#endif
