#ifndef AUTOBOT
#define AUTOBOT

#include "transformer.hpp"

class Autobot : public Transformer
{
private:
    bool can_fly = false;
    bool is_repaired = false;
public:
    using Transformer :: Transformer;
    ~Autobot();
    bool get_can_fly();
    bool get_repaired();
    bool repair();
};

#endif
