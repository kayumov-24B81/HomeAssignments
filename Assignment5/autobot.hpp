/* Kayumov Airat st128100@student.spbu.ru
   transformers. .hpp file or Autobot class. Contains declaration of all Armor class methods and fields. Autobot class is child class of Transformer class with its own fields and methods.
*/
#ifndef AUTOBOT
#define AUTOBOT

#include "transformer.hpp"

class Autobot : public Transformer
{
private:
    bool _is_teleport_ready;
    bool _is_repaired;
public:
    Autobot(Gun g, float toughness, bool fire_resistance);
    Autobot();
    ~Autobot();
    bool get_is_teleport_ready() const;
    bool get_is_repaired() const;
    void set_repaired(bool repaired_stat);
    bool repair();
    bool transform();
    bool self_destruction();
    bool call_reinforcements();
};

std :: ostream & operator<<(std :: ostream & os, const Autobot & transformer);

#endif
