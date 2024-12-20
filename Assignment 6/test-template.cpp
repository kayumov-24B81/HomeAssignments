/* Kayumov Airat st128100@student.spbu.ru
   test-template. This file contains template, specifications and three classes created to test template. All test are here too.
*/

#include <gtest/gtest.h>
#include <vector>
#include <iostream>

template<class Type>
class TemplateClass
{
private:
    Type _object;
    int _number;
    std::vector<float> _vector;
public:
    TemplateClass() : _object() {}
    void setValue(int number)
    {
        _number = number;
    }
    void setVect(std::vector<float> vector)
    {
        _vector = vector;
    }
    bool foo()
    {
        return _object.bar(_number, _vector);
    }
};

template<>
class TemplateClass<int>
{
private:
    int _object;
    int _number;
    std::vector<float> _vector;
public:
    bool foo()
    {
        return true;
    }
};

template<>
class TemplateClass<double>
{
private:
    double _object;
    int _number;
    std::vector<float> _vector;
public:
    bool foo()
    {
        return false;
    }
};

class Class1
{
public:
    bool bar(int number, std::vector<float>& vector)
    {
        return (number > 0);
    }
    int c_1_1()
    {
        return 4;
    }
    float c_1_2()
    {
        return 3.14f;
    }
    void c_1_3()
    {
        std::cout << "hehe lois i return void now" << std::endl;
    }
};

class Class2
{
public:
    bool bar(int number, std::vector<float>& vector)
    {
        return (vector.size() != 0);
    }
    int c_2_1()
    {
        return 5;
    }
    float c_2_2()
    {
        return 2.17f;
    }
    void c_2_3()
    {
        std::cout << "why is it like that" << std::endl;
    }
};

class Class3
{
public:
    bool bar(int number, std::vector<float>& vector)
    {
        return (number == -(int)vector.size());
    }
    int c_3_1()
    {
        return 6;
    }
    float c_3_2()
    {
        return 0.00001f;
    }
    void c_3_3()
    {
        std::cout << "just a void object" << std::endl;
    }
};

TEST(Class1, foo_method_true_condition)
{
    TemplateClass<Class1> testClass;
    int testNumber = 5;
    testClass.setValue(testNumber);
    EXPECT_TRUE(testClass.foo());
}

TEST(Class1, foo_method_false_condition)
{
    TemplateClass<Class1> testClass;
    int testNumber = -5;
    testClass.setValue(testNumber);
    EXPECT_FALSE(testClass.foo());
}

TEST(Class2, foo_method_false_condition)
{
    TemplateClass<Class2> testClass;
    std :: vector<float> testVector(2);
    testClass.setVect(testVector);
    EXPECT_TRUE(testClass.foo());
}

TEST(Class2, foo_method_true_condition)
{
    TemplateClass<Class2> testClass;
    std :: vector<float> testVector;
    testClass.setVect(testVector);
    EXPECT_FALSE(testClass.foo());
}

TEST(Class3, foo_method_false_condition)
{
    TemplateClass<Class3> testClass;
    int testNumber = -3;
    std :: vector<float> testVector(3);
    testClass.setVect(testVector);
    testClass.setValue(testNumber);
    EXPECT_TRUE(testClass.foo());
}

TEST(Class3, foo_method_true_condition)
{
    TemplateClass<Class3> testClass;
    int testNumber = 3;
    std :: vector<float> testVector(3);
    testClass.setVect(testVector);
    testClass.setValue(testNumber);
    EXPECT_FALSE(testClass.foo());
}

TEST(Specification_int, foo_method)
{
    TemplateClass<int> testClass;
    EXPECT_TRUE(testClass.foo());
}

TEST(Specification_double, foo_method)
{
    TemplateClass<double> testClass;
    EXPECT_FALSE(testClass.foo());
}

int test()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
