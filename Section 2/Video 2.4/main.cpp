#include <iostream>

class Shape
{
public:
    virtual double Area(void) = 0;
};

class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }
    double Area(void)
    {
        return (0.5 * base * height);
    }
};

using namespace std;

int main()
{
    Triangle t(10.0, 22.0);
    cout << t.Area() << endl;
    return 0;
}
