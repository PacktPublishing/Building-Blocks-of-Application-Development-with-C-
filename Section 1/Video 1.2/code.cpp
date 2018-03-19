#include <iostream>

using namespace std;

/*
struct Complex
{
	double real;
	double imag;
};

int main()
{
	struct Complex complx;
	complx.real = 10;
	complx.imag = 20;

	cout << complx.real << " + " << complx.imag << "i";

	// If we want to add two complex number
	// First define another number
	struct Complex complx2;
	complx2.real = 11;
	complx2.imag = 12;

	// Now add these two numbers
	struct Complex sum;
	sum.real = complx.real + complx2.real;
	sum.imag = complx.imag + complx2.imag;

	return 0;
}*/

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
};

int main()
{
	Complex complx(10, 20), complx2(11, 12);
	return 0;
}


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
        string Print()
        {
            ostringstream ostrstm;
            //ostrstm << real << " + " << imag << "i";
            ostrstm << real << string(" + ") << imag << string("i");
            return ostrstm.str();
        }

        Complex& Add(Complex& var)
        {
            Complex* temp = new Complex();
            double r, i;
            r = var.GetReal() + this->GetReal();
            i = var.GetImaginary() + this->GetReal();
            temp->SetReal(r);
            temp->SetImaginary(i);
            return *temp;
        }
};

int main()
{
    cout << "Hello world!" << endl;
    Complex comp;
    comp.SetReal(10);
    comp.SetImaginary(20);

    Complex comp1;
    comp1.SetReal(2);
    comp1.SetImaginary(3);

    Complex sum = comp.Add(comp1);
    cout << sum.Print();
    return 0;
}

// ========================================
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
        Complex(const Complex& var)
        {
            real = var.real;
            imag = var.imag;
        }
        virtual ~Complex()
        {
            ;
        }
        double GetReal() const
        {
            return real;
        }
        void SetReal(const double& val)
        {
            real = val;
        }
        double GetImaginary() const
        {
            return imag;
        }
        void SetImaginary(const double& val)
        {
            imag = val;
        }
        string Print()
        {
            ostringstream ostrstm;
            ostrstm << real << string(" + ") << imag << string("i") << endl;
            return ostrstm.str();
        }

        Complex& Add(const Complex& var)
        {
            Complex* temp = new Complex();
            double r, i;
            r = var.GetReal() + this->GetReal();
            i = var.GetImaginary() + this->GetImaginary();
            temp->SetReal(r);
            temp->SetImaginary(i);
            return *temp;
        }
        Complex operator+ (const Complex& rhs)
        {
            Complex sum;
            sum.SetReal(real + rhs.GetReal());
            sum.SetImaginary(imag + rhs.GetImaginary());
            return sum;
        }
        void operator() (const double& r = 0, const double& i = 0)
        {
            real = r;
            imag = i;
        }
        Complex& operator= (const Complex& rhs)
        {
            real = rhs.GetReal();
            imag = rhs.GetImaginary();
            return *this;
        }
};

int main()
{
    Complex comp(10, 20);
    Complex comp1(2, 3);

    Complex sum;
    sum = comp + comp1;
    cout << sum.Print();
    sum(100, 200);
    cout << sum.Print();

    Complex s = sum;
    cout << s.Print();
    return 0;
}
