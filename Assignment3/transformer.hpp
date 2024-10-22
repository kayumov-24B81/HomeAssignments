
#ifndef TRANSFORMERS
#define TRANSFORMERS


class Transformer
{
private:
    unsigned hp;
    unsigned lvl;
    unsigned fuel;
    unsigned ammo;
    
public:
    Transformer();
    unsigned get_hp();
    unsigned get_lvl();
    unsigned get_fuel();
    unsigned get_ammo();
};

#endif
