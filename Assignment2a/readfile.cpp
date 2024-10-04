#include <iostream>
#include <fstream>
#include <string>

int readfile(int size, std :: string path)
{
    char ftext[size];
    
    std :: ifstream fr;
    
    fr.open(path, std :: ios :: in | std :: ios :: binary);
    
    fr.read((char*)&ftext, sizeof(ftext));
    fr.close();
    
    std :: ofstream fw;
    
    for(int i = 0; i < size; ++i)
    {
        ftext[i] = ftext[size - i];
    }
    
    fw.open("tempbin", std :: ios :: out | std :: ios :: binary);
    
    fw.write((char*)&ftext, sizeof(ftext));
    fw.close();
    
    return 0;
}
