// Define a class Rectangle and overload area function for different types of data type.

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int area(int length, int width)
    {
        return length * width;
    }

    float area(float length, float width)
    {
        return length * width;
    }

    double area(double length, double width)
    {
        return length * width;
    }
};

int main()
{
    Rectangle rectangle;

    int result1 = rectangle.area(5, 10);
    cout << "Area 1: " << result1 << endl;

    float result2 = rectangle.area(3.5f, 2.7f);
    cout << "Area 2: " << result2 << endl;

    double result3 = rectangle.area(2.5, 4.8);
    cout << "Area 3: " << result3 << endl;

    return 0;
}
