#include <iostream>
#include <cmath>

using namespace std;

class Proof
{
protected:
    int side1;
    int side2;

public:
    Proof() {}
    Proof(int a, int b) : side1(a), side2(b) {}

    int getSide1() const
    {
        return side1;
    }

    int getSide2() const
    {
        return side2;
    }
};

class Compute : public Proof
{
public:
    Compute() {}
    Compute(int a, int b) : Proof(a, b) {}

    bool isRightAngledTriangle()
    {
        int c_squared = side1 * side1 + side2 * side2;
        int c = sqrt(c_squared);

        return (c * c == c_squared);
    }
};

int main()
{
    int a, b;

    cout << "Enter the length of side 1: ";
    cin >> a;

    cout << "Enter the length of side 2: ";
    cin >> b;

    Compute triangle(a, b);

    if (triangle.isRightAngledTriangle())
    {
        cout << "The triangle with sides " << a << " and " << b << " is a right-angled triangle." << std::endl;
    }
    else
    {
        cout << "The triangle with sides " << a << " and " << b << " is not a right-angled triangle." << std::endl;
    }

    return 0;
}
