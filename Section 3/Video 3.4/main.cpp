#include <iostream>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void Pause(unsigned int millisec)
{
    #ifdef _WIN32
    Sleep(millisec);
    #else
    usleep(millisec * 1e3);
    #endif // _WIN32
}

int main()
{
    std::cout << "Going to sleep for 2 seconds\n";
    Pause(2000);
    std::cout << "Just woke up from sleep\n";
    return 0;
}

