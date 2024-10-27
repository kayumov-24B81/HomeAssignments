/* Kayumov Airat st128100@student.spbu.ru
   transformers. .hpp file or Minicon class. Contains declaration of all Minicon class methods and fields. Minicon class is child class of Transformer class with its own fields and methods.
*/
#ifndef MINICON
#define MINICON

#include "transformer.hpp"

class Minicon : public Transformer
{
private:
    bool can_fly;
    bool battle_mode;
public:
    Minicon(Gun g, float toughness);
    Minicon();
    ~Minicon();
    bool get_can_fly() const;
    bool get_battle_mode() const;
    void set_can_fly(bool fly);
    void set_battle_mode(bool mode);
    void change_mode();
};

std :: ostream & operator<<(std :: ostream & os, const Minicon & transformer);

#endif
