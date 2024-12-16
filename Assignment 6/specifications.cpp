#include "specifications.hpp"

TemplateClass<int> :: TemplateClass(int& object, int number, std :: vector<float>& vector)
{
    _object = object;
    _number = number;
    _vector = vector;
}

bool TemplateClass<int> :: foo()
{
    return true;
}

TemplateClass<double> :: TemplateClass(double& object, int number, std :: vector<float>& vector)
{
    _object = object;
    _number = number;
    _vector = vector;
}

bool TemplateClass<double> :: foo()
{
    return false;
}
