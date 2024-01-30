//  Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called
// square and parallelogram from the base shape. Add to the base class, a member
// function get_data() to initialise base class data members and another member
// function display_area() to compute and display the area of figures. Make
// display_area() as a virtual function and redefine this function in the derived classes to
// suit their requirements.
// Using these three classes, design a program that will accept dimensions of a
// square or a parallelogram interactively, and display the area.

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
protected:
    double length1;
    double length2;

public:
    void get_data(double x, double y = 0)
    {
        length1 = x;
        length2 = y;
    }
    virtual void display_area() = 0;
};

class Square : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Square is :" << pow(length1, 2) << endl;
    }
};

class Parallelogram : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Parallelogram is : " << length1 * length2 << endl;
        ;
    }
};

int displaymenu()
{
    int choice;
    cout << "\n************Calculate Area************\n"
         << endl;
    cout << "1.Square" << endl;
    cout << "2.Parallelogram" << endl;
    cout << "3.Quit" << endl;
    cout << "\nEnter your choice : ";
    cin >> choice;
    return choice;
}

int main()
{
    double a;
    double b;
    while (true)
    {
        switch (displaymenu())
        {
        case 1:
        {
            Square S;
            cout << "Enter side : ";
            cin >> a;
            S.get_data(a);
            S.display_area();
            break;
        }
        case 2:
        {
            Parallelogram P;
            cout << "Enter height : ";
            cin >> a;
            cout << "Enter base : ";
            cin >> b;
            P.get_data(a, b);
            P.display_area();
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