/* Kayumov Airat st128100@student.spbu.ru
   transformers. .hpp file or Gun class. Contains declaration of all Gun class methods and fields. Gun class object is created outside the Transformer class and then is used to create Transformer class object.
*/
#ifndef GUN
#define GUN

class Gun
{
private:
    unsigned damage;

public:
    Gun(unsigned dmg);
    Gun();
    ~Gun();
    unsigned get_damage();
    void set_damage(unsigned dmg);
};

#endif
