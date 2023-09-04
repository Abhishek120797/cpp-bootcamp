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