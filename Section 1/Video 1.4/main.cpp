#include <iostream>

using namespace std;

class Base
{
protected:
    double b, h;

public:
    Base()
    {
        b = 0.0;
        h = 0.0;
    }
    double Perimeter()
    {
        return 0.0;
    }
    virtual double Area()
    {
        return 0.0;
    }
    void operator() (const double& b_, const double& h_ = 0.0)
    {
        b = b_;
        h = h_;
    }
};

class Rectangle : public Base
{
public:
    double Perimeter()
    {
        return (2*(b+h));
    }
    double Area()
    {
        return (b*h);
    }
    Rectangle(const double& b_, const double& h_)
    {
        b = b_;
        h = h_;
    }
};

int main()
{
    Rectangle r(10, 5);
    cout << r.Area() << endl;
    Base* b = &r;
    cout << b->Area() << endl;

    cout << r.Perimeter() << endl;
    cout << b->Perimeter() << endl;

    return 0;
}
