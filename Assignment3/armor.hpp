#ifndef ARMOR
#define ARMOR

class Armor
{
private:
    float toughness;
public:
    Armor(float arm_tough);
    Armor();
    ~Armor(); 
    float get_toughness();
};

#endif
