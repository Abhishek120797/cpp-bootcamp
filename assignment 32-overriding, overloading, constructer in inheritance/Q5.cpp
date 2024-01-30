// Define a class A having multiple constructors. Define another class B derived from
// class A. Create derived class constructors and show use of constructor in this single
// inheritance

#include <iostream>

using namespace std;

class A
{
public:
    int x;
    A()
    {
        cout << "A Default constructor" << endl;
        x = 0;
    }
    A(int val)
    {
        cout << "A perametrized constructor" << endl;
        x = val;
    }
};

class B : public A
{
public:
    B() : A() { cout << "B Default constructor" << endl; }
    B(int val) : A(val) { cout << "B parametrized constructor" << endl; }
};

int main()
{
    B b1;
    cout << "Value of x in b1: " << b1.x << endl;

    B b2(5);
    cout << "Value of x in b2: " << b2.x << endl;

    return 0;
}