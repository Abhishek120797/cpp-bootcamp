// Define overloaded functions to calculate area of circle, area of rectangle and area of
//  triangle

#include <iostream>
using namespace std;

float area(float);
int area(int, int);
float area(float, float);

int main()
{
    float redius, base, height;
    int length, breath;

    cout << "Enter redius of circle: ";
    cin >> redius;
    cout << "Area of circle is " << area(redius) << endl;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breath of rectanle: ";
    cin >> breath;
    cout << "Area of rectangle is " << area(length, breath) << endl;
    cout << "Enter base of trangle: ";
    cin >> base;
    cout << "Enter height of trangle: ";
    cin >> height;
    cout << "Area of rectangle is " << area(base, height) << endl;

    return 0;
}

float area(float r)
{
    return r * r * 3.14;
}

float area(float b, float h)
{
    return 0.5 * b * h;
}

int area(int l, int b)
{
    return l * b;
}