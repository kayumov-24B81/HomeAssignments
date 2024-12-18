#include "classes.hpp"

bool Class1 :: bar(int number, std :: vector<float>& vector)
{
    return (number > 0);
}

bool Class2 :: bar(int number, std :: vector<float>& vector)
{
    return (vector.size() != 0);
}

bool Class3 :: bar(int number, std :: vector<float>& vector)
{
    return (number = -vector.size());
}

