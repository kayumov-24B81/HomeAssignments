#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

int getsize(std :: string path)
{
    int size = 0;

    size = std :: filesystem :: file_size(path);

    return size;
}
