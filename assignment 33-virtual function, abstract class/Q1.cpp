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