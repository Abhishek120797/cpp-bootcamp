#include <iostream>
using namespace std;

class Fraction
{
private:
    long numerator;
    long denominator;

public:
    Fraction(long n = 0, long d = 0)
    {
        numerator = n;
        denominator = d;
    }
    Fraction operator++(int dummy)
    {
        Fraction temp;
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
    }
    Fraction operator++()
    {
        Fraction temp;
        temp.numerator = ++numerator;
        temp.denominator = ++denominator;
        return temp;
    }
    friend ostream &operator<<(ostream &, Fraction);
    friend istream &operator>>(istream &, Fraction &);
    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

ostream &operator<<(ostream &os, Fraction f)
{
    os << f.numerator << "/" << f.denominator;
    return os;
}

istream &operator>>(istream &is, Fraction &f)
{
    cout << "Numerator   :";
    is >> f.numerator;
    cout << "denominator :";
    is >> f.denominator;
    return is;
}

int main()
{
    Fraction f1, f2;
    cout << "f1    :" << f1 << endl;
    cout << "f1    :" << f2 << endl;
    cout << "Enter first fraction value: " << endl;
    cin >> f1;

    f1++;
    cout << "f1++  :" << f1 << endl;
    ++f1;
    cout << "++f1  :" << f1 << endl;

    cout << "Enter second fraction value: " << endl;
    cin >> f2;

    f2 = ++f1;
    cout << "f2 = ++f1" << endl;
    cout << "f1    :" << f1 << endl;
    cout << "f2    :" << f2 << endl;
    f2 = f1++;
    cout << "f2 = f1++" << endl;
    cout << "f1    :" << f1 << endl;
    cout << "f2    :" << f2 << endl;

    return 0;
}