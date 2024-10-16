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
    
    for(int i = 1; i < size; ++i)
    {
        rftext[i - 1] = ftext[size - i - 1];
    }
    
    delete [] ftext;
    
    fw.open("tempbin", std :: ios :: out | std :: ios :: binary);
    
    fw.write(rftext, size);
    fw.close();
    
    delete [] rftext;
    
    return 0;
}
