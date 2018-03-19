#include <iostream>
#include <stdexcept>

// In this exercise we'll learn to write
// a templated array class within
// it's own namespace and exception
// handling mechanism

namespace MyArray
{
    template <typename T = int>
    class vector
    {
    protected:
        T* data;
        size_t length;
    public:
        vector(const size_t& len = 10)
        {
            data = new T[len];
            length = len;
        }
        ~vector()
        {
            if (data)
            {
                delete [] data;
                data = 0;
            }
        }
        T& operator[](const size_t& index)
        {
            if (index >= length)
            {
                throw std::out_of_range("vector::operator[] - index out of range");
            }
            return data[index];
        }
    };
}

using namespace std;

int main()
{
    MyArray::vector<double> myvector(2);
    myvector[1] = 2.5;
    std::cout << myvector[1] << std::endl;

    try
    {
        std::cout << myvector[5] << std::endl;
    }
    catch(std::out_of_range excpt)
    {
        std::cout << excpt.what() << std::endl;
    }
    return 0;
}
