/* Kayumov Airat st128100@student.spbu.ru
   bin_operator
   this is main file. for now all code is in it.
*/

#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    std :: string path = "";
    std :: cout << "Write down full path to the file" << std :: endl;
    std :: cin >> path;
    std :: fstream file(path);
    int size = 0;
    file.seekg (0, std::ios::end);
    size = file.tellg();
    std :: cout << "This file size is " << size << " bytes" << std :: endl;
    file.close();
    return 0;
}
