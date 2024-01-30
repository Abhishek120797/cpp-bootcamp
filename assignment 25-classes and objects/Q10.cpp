//  Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.

#include <iostream>
using namespace std;

class Area
{
private:
    float side;
    float length;
    float breath;
    float redius;

public:
    void setSide(float s) { side = s; }
    void setLenBre(float l, float b)
    {
        length = l;
        breath = b;
    }
    void setRedius(float r) { redius = r; }
    float areaOfSquare() { return side * side; }
    float areaOfRectangle() { return length * breath; }
    float areaOfCircle() { return 3.14 * redius * redius; }
};

int main()
{
    Area a1;

    a1.setSide(5);
    a1.setLenBre(3, 2);
    a1.setRedius(4);
    cout << "Area of circle is " << a1.areaOfCircle() << endl;
    cout << "Area of square is " << a1.areaOfSquare() << endl;
    cout << "Area of rectangle is " << a1.areaOfRectangle();
    return 0;
}