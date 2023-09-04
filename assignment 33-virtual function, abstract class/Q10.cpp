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