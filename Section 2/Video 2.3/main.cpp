#include <iostream>

using namespace std;

class Base
{
protected:
    double b, h;

public:
    Base(const double& b_, const double& h_)
    {
        b = b_;
        h = h_;
    }

    virtual double Perimeter() = 0;
};

class Rectangle : public Base
{
public:
    Rectangle(const double& b_, const double& h_) : Base(b_, h_)
    {
        ;
    }
    double Perimeter()
    {
        return (2 * (b + h));
    }
};

int main()
{
    Rectangle r(10, 5);
    cout << r.Perimeter() << endl;
    return 0;
}
