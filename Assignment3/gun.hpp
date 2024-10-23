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
    void set_damage(unsigned dmg);
};

#endif
