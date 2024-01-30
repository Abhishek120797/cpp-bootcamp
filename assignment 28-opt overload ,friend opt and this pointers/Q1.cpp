// Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int i)
    {
        real = 0;
        imag = i;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    void setReal(int r) { real = r; }
    void setImag(int i) { imag = i; }
    void setComplex(int r, int i)
    {
        real = r;
        imag = i;
    }

    int getReal() { return real; }
    int getImag() { return imag; }

    friend ostream &operator<<(ostream &os, Complex c)
    {
        if (c.imag > 0)
            os << c.real << " + " << c.imag << "i";
        else
            os << c.real << " - " << -c.imag << "i";

        return os;
    }

    friend istream &operator>>(istream &is, Complex &c)
    {
        cout << "Enter real part:";
        is >> c.real;
        cout << "Enter imag part:";
        is >> c.imag;
        return is;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real = (real * c.real) + (imag * c.imag * (-1));
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }
    bool operator==(Complex c)
    {
        if (real == c.real && imag == c.imag)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Complex c1(5, 7);
    Complex c2;

    cout << "Enter a complex number: " << endl;
    cin >> c2;

    Complex sum = c1 + c2;

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << sum << endl;
    return 0;
}