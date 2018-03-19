#include <iostream>
#include <sstream>

using namespace std;

class Complex
{
    private:
        double real;
        double imag;
    public:
        Complex()
        {
            real = 0.0;
            imag = 0.0;
        }
        Complex(const double& realVal, const double& imagVal)
        {
            real = realVal;
            imag = imagVal;
        }
        virtual ~Complex()
        {
            ;
        }
        double GetReal()
        {
            return real;
        }
        void SetReal(const double& val)
        {
            real = val;
        }
        double GetImaginary()
        {
            return imag;
        }
        void SetImaginary(const double& val)
        {
            imag = val;
        }
};

int main()
{
    Complex complx(10, 20), complx2(11, 12);
    Complex c;
    complx2.SetReal(100);
    cout << complx2.GetReal() << endl;
    cout << complx2.GetImaginary() << endl;
    return 0;
}
