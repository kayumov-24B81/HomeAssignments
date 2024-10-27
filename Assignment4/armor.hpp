/* Kayumov Airat st128100@student.spbu.ru
   transformers. .hpp file or Armor class. Contains declaration of all Armor class methods and fields. Object of this class is created inside Transformer class constructor.
*/
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
    float get_toughness() const;
};

#endif
