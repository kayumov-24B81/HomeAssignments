/* Kayumov Airat st128100@student.spbu.ru
   bin_operator
   this is main file. for now all code is in it.
*/

#include <iostream>
#include <fstream>
#include <string>
#include "binaryop.hpp"

int main(void)
{
    std :: string path = "source";
    int size = getsize(path);
    readfile(size, path);
    return 0;
}
