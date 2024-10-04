#include <iostream>
#include <fstream>
#include <string>

int readfile(int size, std :: string path)
{
    char ftext[size];
    
    std :: fstream fr;
    
    fr.open(path, std :: ios :: in | std :: ios :: binary);
    
    fr.read((char*)&ftext, sizeof(ftext));
    fr.close();
    
    return 0;
}
