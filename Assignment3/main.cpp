#include <iostream>
#include "transformer.hpp"
#include "gun.hpp"

int main()
{
    Transformer goidabot;
    
    std :: cout << goidabot.get_ammo() << std :: endl;
    
    Gun plasma_gun;
    
    std :: cout << plasma_gun.get_damage() << std :: endl;
    
    return 0;
}
