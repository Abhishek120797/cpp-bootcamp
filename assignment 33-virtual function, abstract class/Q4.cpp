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
    virtual void display_area()
    {
        cout << "shape Area called" << endl;
    }
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
    Shape *S = NULL;
    while (true)
    {
        switch (displaymenu())
        {
        case 1:
        {
            Triangle T;
            S = &T;
            S->get_data();
            S->display_area();
            delete S;
            break;
        }
        case 2:
        {
            Rectangle R;
            S = &R;
            S->get_data();
            S->display_area();
            delete S;
            break;
        }
        case 3:
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