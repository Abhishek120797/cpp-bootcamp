#include <iostream>
using namespace std;

class Shape
{
protected:
    int width;
    int height;

public:
    Shape()
    {
        width = 0;
        height = 0;
        cout << "Shape created with default constructor" << endl;
    }
    Shape(int w, int h)
    {
        width = w;
        height = h;
        cout << "Shape created with parameterized constructor" << endl;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle() : Shape()
    {
        cout << "Rectangle created with default constructor" << endl;
    }
    Rectangle(int w, int h) : Shape(w, h)
    {
        cout << "Rectangle created with parameterized constructor" << endl;
    }
    void displayArea()
    {
        int area = width * height;
        cout << "Area of rectangle: " << area << endl;
    }
};

int main()
{
    // Creating a Rectangle object using the parameterized constructor
    Rectangle rect1(5, 7);

    cout << endl;

    // Creating another Rectangle object using the default constructor
    Rectangle rect2;

    cout << endl;

    // Displaying area of the first rectangle
    cout << "Area of rect1:" << endl;
    rect1.displayArea();

    cout << endl;

    // Displaying area of the second rectangle
    cout << "Area of rect2:" << endl;
    rect2.displayArea();

    return 0;
}
