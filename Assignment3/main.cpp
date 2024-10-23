#include <iostream>
#include "decepticon.hpp"
#include "autobot.hpp"

int main()
{
    Gun pistol(5);
    
    Autobot goidabot(pistol, 1.2);
    
    goidabot.get_stats();
    
    if(goidabot.repair())
    {
         std :: cout << "Repaired succesfully" << std :: endl;
    }
    else
    {
         std :: cout << "This aoutobot was already repaired" << std :: endl;
    }
    
    goidabot.get_stats();
    
    return 0;
}
