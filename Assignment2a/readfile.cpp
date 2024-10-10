#include <iostream>
#include <fstream>
#include <string>

int readfile(int size, std :: string path)
{
    char* ftext = new char[size];
    
    std :: ifstream fr;
    
    fr.open(path, std :: ios :: in | std :: ios :: binary);
    
    fr.read(ftext, size);
    fr.close();
    
    std :: ofstream fw;
    
    char* rftext = new char[size];
    
    for(int i = 0; i < size; ++i)
    {
        rftext[i] = ftext[size - i];
    }
    
    delete [] ftext;
    
    fw.open("tempbin", std :: ios :: out | std :: ios :: binary);
    
    fw.write(rftext, size);
    fw.close();
    
    delete [] rftext;
    
    return 0;
}
