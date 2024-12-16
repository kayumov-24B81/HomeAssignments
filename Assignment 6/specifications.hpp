#ifndef SPECIFICATIONS_HPP
#define SPECIFICATIONS_HPP
#include "template.hpp"

template<>
class TemplateClass<int>
{
private:
    int _object;
    int _number;
    std :: vector<float> _vector;
public:
    TemplateClass(int& object, int number, std :: vector<float>& vector);
    bool foo();
};

template<>
class TemplateClass<double>
{
private:
    double _object;
    int _number;
    std :: vector<float> _vector;
public:
    TemplateClass(double& object, int number, std :: vector<float>& vector);
    bool foo();
};





#endif
