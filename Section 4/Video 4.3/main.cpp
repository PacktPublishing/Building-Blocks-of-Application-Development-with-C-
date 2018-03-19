#include <iostream>
#include <fstream>
#include <cstring>

int main()
{
    std::ifstream inBinaryFile;
    inBinaryFile.open("main.7z", std::ios::binary);
    const char magicWords[4] = { '\x50', '\x4b', '\x03', '\x04' };
    char* readData = new char[4];
    inBinaryFile.read(readData, 4);
    inBinaryFile.close();

    if (std::memcmp(readData, magicWords, 4) == 0)
    {
        std::cout << "This is a ZIP file!\n";
    }
    else
    {
        std::cout << "This is NOT a ZIP file!\n";
    }
    delete [] readData;
    return 0;
}
