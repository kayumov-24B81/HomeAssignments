#include <iostream>
#include "decepticon.hpp"

int main()
{
    Gun pistol(5);
    
    Decepticon goidabot(pistol, 1.2);
    
    goidabot.get_stats();
    
    if(goidabot.upgrade())
    {
         std :: cout << "Upgraded succesfully" << std :: endl;
    }
    else
    {
         std :: cout << "This decepticon was already upgraded" << std :: endl;
    }
    
    goidabot.get_stats();
    
    return 0;
}
