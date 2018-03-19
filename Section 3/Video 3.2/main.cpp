#include <iostream>

namespace foo
{
    int add(int a, int b)
    {
        return (a + b);
    }
    char* cout()
    {
        return "Hello world";
    }
}

int main()
{
    std::cout << foo::add(2, 3) << std::endl;
    std::cout << foo::cout() << std::endl;
    return 0;
}
