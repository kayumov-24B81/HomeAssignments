/* Kayumov Airat st128100@student.spbu.ru
   p_operator
   this is main file. it reads line with all characters, counts its length
   and call function p_operator.
*/
#include <iostream>
#include "p_operator.hpp"


int main()
{
    std :: string input;

    std :: getline(std :: cin, input);
    input += ' ';
    
    int len = input.length();
    
    std :: cout << p_operator(input, len) << std :: endl;
    
    return 0;
}
