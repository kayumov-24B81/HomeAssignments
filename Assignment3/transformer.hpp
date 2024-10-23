
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
    void lvl_up(unsigned lvl_plus);
    void lvl_up();
    bool fire();
    void reload();
    void get_stats();
};

#endif
