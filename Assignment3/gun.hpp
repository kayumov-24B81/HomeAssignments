#ifndef GUN
#define GUN

class Gun
{
private:
    unsigned damage;
    unsigned ammo_consumption;

public:
    Gun();
    unsigned get_damage();
    unsigned get_ammo_consumption();
};

#endif
