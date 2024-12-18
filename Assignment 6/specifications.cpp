#include "specifications.hpp"
bool TemplateClass<int> :: foo()
{
    return true;
}

bool TemplateClass<double> :: foo()
{
    return false;
}
