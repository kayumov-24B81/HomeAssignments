
#ifndef TRANSFORMERS
#define TRANSFORMERS

#include "gun.hpp"

class Transformer
{
private:
    Gun gun;
    unsigned hp;
    unsigned lvl;
    unsigned fuel;
    unsigned ammo;
    
public:
    Transformer(Gun g);
    Transformer();
    ~Transformer();
    unsigned get_hp();
    unsigned get_lvl();
    unsigned get_fuel();
    unsigned get_ammo();
    unsigned get_damage();
    void lvl_up(unsigned lvl_plus);
    void lvl_up();
    bool fire();
    void reload();
    void get_stats();
};

#endif
