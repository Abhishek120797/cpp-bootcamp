// Create a base class called volume. Use this class to store two double type values
// that could be used to compute the volume of figures. Derive two specific classes
// called cube and sphere from the base shape. Add to the base class, a member
// function get_data() to initialise base class data members and another member
// function display_volume() to compute and display the volume of figures. Make
// display_volume() as a virtual function and redefine this function in the derived
// classes to suit their requirements.
// Using these three classes, design a program that will accept dimensions of a cube
// or a sphere interactively, and display the volume

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14
class Volume
{
protected:
    double length;
    double volume;

public:
    void get_data(double x, double y = 0)
    {
        length = x;
        volume = y;
    }
    virtual void display_volume() = 0;
};

class Sphere : public Volume
{
public:
    void display_volume()
    {
        volume = 4 / 3 * PI * pow(length, 3);
        cout << "Volume of Sphere is : " << volume << endl;
    }
};

class Cube : public Volume
{
public:
    void display_volume()
    {
        volume = pow(length, 3);
        cout << "Area of Triangle is : " << volume << endl;
    }
};

int displaymenu()
{
    int choice;
    cout << "\n************Calculate Volume************\n"
         << endl;
    cout << "1.Cube" << endl;
    cout << "2.Sphere" << endl;
    cout << "3.Quit" << endl;
    cout << "\nEnter your choice : ";
    cin >> choice;
    return choice;
}

int main()
{
    double a, b;
    while (true)
    {
        switch (displaymenu())
        {
        case 1:
        {
            Cube C;
            cout << "Enter side : ";
            cin >> a;
            C.get_data(a);
            C.display_volume();
            break;
        }
        case 2:
        {
            Sphere S;
            cout << "Enter redius : ";
            cin >> a;
            S.get_data(a);
            S.display_volume();
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