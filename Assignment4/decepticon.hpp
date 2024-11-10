/* Kayumov Airat st128100@student.spbu.ru
   transformers. .hpp file or Decepticon class. Contains declaration of all Decepticon class methods and fields. Decepticon class is child class of Transformer class with its own fields and methods.
*/
#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.hpp"

class Decepticon : public Transformer
{
private:
    bool _can_makedonian_shooting;
    bool _is_upgraded;
public:
    Decepticon(Gun g, float toughness, bool fire_resistance);
    Decepticon();
    ~Decepticon();
    bool get_is_upgraded() const;
    bool get_can_makedonian_shooting() const;
    void set_is_upgraded(bool is_upgraded);
    void set_can_makedonian_shooting(bool can_makedonian_shooting);
    bool upgrade();
};

std :: ostream & operator<<(std :: ostream & os, const Decepticon & transformer);

#endif
