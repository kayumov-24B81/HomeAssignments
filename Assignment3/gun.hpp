#ifndef GUN
#define GUN

class Gun
{
private:
    unsigned damage;

public:
    Gun(unsigned dmg);
    Gun();
    ~Gun();
    unsigned get_damage();
};

#endif
