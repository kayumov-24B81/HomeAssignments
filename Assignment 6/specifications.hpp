#ifndef SPECIFICATIONS_HPP
#define SPECIFICATIONS_HPP
#include "template.hpp"

template<>
class TemplateClass<int>
{
public:
    bool foo();
};

template<>
class TemplateClass<double>
{
public:
    bool foo();
};





#endif
