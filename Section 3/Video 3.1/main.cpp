#include <iostream>

using namespace std;

// function template
template <typename T>
void Swap(T& a, T& b)
{
    T c;
    c = b;
    b = a;
    a = c;
}

// class template
template <typename T>
class Array
{
protected:
    T* arr;

public:
    Array(size_t s = 10)
    {
        arr = new T[s];
    }
    ~Array()
    {
        delete [] arr;
    }
    void Set(size_t index, T input)
    {
        arr[index] = input;
    }
    T& Get(size_t index)
    {
        return arr[index];
    }
};

int main()
{
    Array<int> intarray;
    intarray.Set(1, 10);
    cout << intarray.Get(1) << endl;

    Array<char> chararray(256);
    chararray.Set(0, 'H');
    chararray.Set(1, 'i');
    chararray.Set(2, '\0');
    cout << chararray.Get(0) << chararray.Get(1) <<
        chararray.Get(2) << endl;

    return 0;
}
