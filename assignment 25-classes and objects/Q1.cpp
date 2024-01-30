// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    void set_complex(int real_num, int img_num)
    {
        real = real_num;
        img = img_num;
    }
    void print_complex()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;

    c1.set_complex(5, 8);
    c2.set_complex(4, 6);

    c1.print_complex();
    c2.print_complex();

    return 0;
}