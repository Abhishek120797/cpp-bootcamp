// Write a C++ Program of Templated class derived from Non-templated class

#include <iostream>
#include <string>
using namespace std;

class Shape
{
    string shape;

public:
    Shape() {}
    Shape(string s)
    {
        shape = s;
    }
    void setShape(string s)
    {
        shape = s;
    }
    string getShape() { return shape; }
};
template <class T1, class T2>
class Rectangle : public Shape
{
    T1 length;
    T2 width;

public:
    Rectangle() {}
    Rectangle(T1 l, T2 w, string s) : Shape(s)
    {
        length = l;
        width = w;
    }
    auto area() { return length * width; }
};

int main()
{

    Rectangle<int, float> rect1(5, 7.5, "Rectangle");

    cout << "Area of rectangl is:" << rect1.area() << endl;
    cout << "Shape is " << rect1.getShape() << endl;

    return 0;
}
