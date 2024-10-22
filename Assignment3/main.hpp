
#ifndef TRANSFORMERS
#define TRANSFORMERS


class Transformer
{
private:
    unsigned hp = 100;
    unsigned lvl = 0;
    unsigned fuel = 100;
    unsigned ammo = 50;
    
public:
    Transformer() = default;
    
    unsigned get_hp()
    {
        return hp;
    }
    
    unsigned get_lvl()
    {
        return lvl;
    }
    
    unsigned get_fuel()
    {
        return fuel;
    }
    
    unsigned get_ammo()
    {
        return ammo;
    }
};

#endif
