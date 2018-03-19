#include <iostream>

using namespace std;

class divbyzero_excpt : public std::exception
{
public:
    const char* what() const throw()
    {
        return "Divide by Zero Exception!";
    }
};

int main()
{
    int a, b, c;
    a = 10;
    b = 0;
    try
    {
        if ( b == 0) throw divbyzero_excpt();
        c = a / b;
        cout << c << endl;
    }
    catch(divbyzero_excpt& d)
    {
        cout << d.what() << endl;
    }
    return 0;
}
