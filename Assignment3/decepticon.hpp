#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.hpp"

class Decepticon : public Transformer
{
private:
    bool can_fly = true;
    bool is_upgraded = false;
public:
    using Transformer :: Transformer;
    ~Decepticon();
    bool get_upgrade();
    bool get_can_fly();
    bool upgrade();
};

#endif
