#ifndef TEMPLATE_HPP
#define TEMPLATE_HP
#include <vector>

template<typename Type>
class TemplateClass
{
private:
    Type _object;
    int _number;
    std :: vector<float> _vector;
public:
    TemplateClass(Type& object, int number, std :: vector<float>& vector);
    bool foo();
};

#endif
