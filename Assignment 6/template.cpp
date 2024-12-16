#include "template.hpp"

template<typename Type>
TemplateClass<Type> :: TemplateClass(Type& object, int number, std :: vector<float>& vector)
{
    _object = object;
    _number = number;
    _vector = vector;
}

template<typename Type>
bool TemplateClass<Type> :: foo()
{
    return _object.bar(_number, _vector);
}
