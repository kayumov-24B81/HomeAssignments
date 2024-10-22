#include <iostream>
#include "transformer.hpp"

int main()
{
    Gun pistol(5);
    
    Transformer goidabot(pistol, 1.2);
    
    goidabot.get_stats();
    
    return 0;
}
