//  Extend above to display the area of circles. For a circle,only one value is needed i.e.
// radius but in get_data() function 2 values are passed.

#include <iostream>
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
    virtual void display_area()
    {
        cout << "shape Area called" << endl;
    }
};

class Circle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Circle is : " << 3.14 * length1 * length1 << endl;
    }
};

class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Triangle is : " << 0.5 * length1 * length2 << endl;
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
    cout << "3.Circle" << endl;
    cout << "4.Quit" << endl;
    cout << "\nEnter your choice : ";
    cin >> choice;
    return choice;
}

int main()
{
    Shape *S = NULL;
    double a, b;
    while (true)
    {
        switch (displaymenu())
        {
        case 1:
        {
            Triangle T;
            S = &T;
            cout << "Enter base : ";
            cin >> a;
            cout << "Enter height : ";
            cin >> b;
            S->get_data(a, b);
            S->display_area();
            delete S;
            break;
        }
        case 2:
        {
            Rectangle R;
            S = &R;
            cout << "Enter length : ";
            cin >> a;
            cout << "Enter breath : ";
            cin >> b;
            S->get_data(a, b);
            S->display_area();
            delete S;
            break;
        }
        case 3:
        {
            Circle C;
            S = &C;
            cout << "Enter redius : ";
            cin >> a;
            S->get_data(a);
            S->display_area();
        }
        case 4:
        {
            delete S;
            return 0;
        }
        default:
            cout << "Invalid choice !";
        }
    }
    return 0;
}