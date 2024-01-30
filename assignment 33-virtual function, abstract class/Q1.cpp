// Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called
// triangle and rectangle from the base shape. Add to the base class, a member
// function get_data() to initialise base class data members and another member
// function display_area() to compute and display the area of figures. Make
// display_area() as a virtual function and redefine this function in the derived classes to
// suit their requirements.
// Using these three classes, design a program that will accept dimensions of a
// triangle or a rectangle interactively, and display the area.
// Remember the two values given as input will be treated as lengths of two sides in
// the case of rectangles, and as base and height in the case of the triangles, and used
// as follows:
// Area of rectangle = x * y Area of triangle = 1/2 * x * y

#include <iostream>
using namespace std;

class Shape
{
protected:
    double length1;
    double length2;

public:
    void get_data()
    {
        cout << "Enter length 1 : ";
        cin >> length1;
        cout << "Enter length 2 : ";
        cin >> length2;
    }
    virtual void display_area() = 0;
};

class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Triangle is :" << 0.5 * length1 * length2 << endl;
    }
};

class Rectangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Rectangle is : " << length1 * length2 << endl;
        ;
    }
};

int displaymenu()
{
    int choice;
    cout << "\n************Calculate Area************\n"
         << endl;
    cout << "1.Triangle" << endl;
    cout << "2.Rectangle" << endl;
    cout << "3.Quit" << endl;
    cout << "\nEnter your choice : ";
    cin >> choice;
    return choice;
}

int main()
{
    while (true)
    {
        switch (displaymenu())
        {
        case 1:
        {
            Triangle T;
            T.get_data();
            T.display_area();
            break;
        }
        case 2:
        {
            Rectangle R;
            R.get_data();
            R.display_area();
            break;
        }
        case 3:
        {
            return 0;
        }
        default:
            cout << "Invalid choice !";
        }
    }
    return 0;
}