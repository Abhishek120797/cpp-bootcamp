#include<iostream>
using namespace std;

#define PI 3.14
class Shape
{
    protected:
        double length1;
        double length2;
    public:
        void get_data(double x,double y=0)
        {
            length1=x;
            length2=y;
        }
      virtual void display_area()=0;
};

class Circle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of Circle is : "<<PI*length1*length1<<endl;
        }
};

class Triangle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of Triangle is : "<<0.5*length1*length2<<endl;
        }
};

class Rectangle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of Rectangle is : "<<length1*length2<<endl;;
        }     
};

int displaymenu()
{
    int choice;
    cout<<"\n************Calculate Area************\n"<<endl;
    cout<<"1.Triangle"<<endl;
    cout<<"2.Rectangle"<<endl;
    cout<<"3.Circle"<<endl;
    cout<<"4.Quit"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>choice;
    return choice;
}

int main()
{
    double a,b;
    while(true)
    {
        switch(displaymenu())
        {
            case 1:
            {
                Triangle T;
                cout<<"Enter base : ";
                cin>>a;
                cout<<"Enter height : ";
                cin>>b;
                T.get_data(a,b);
                T.display_area();
                break;
            }
            case 2:
            {
                Rectangle R;
                cout<<"Enter length : ";
                cin>>a;
                cout<<"Enter breath : ";
                cin>>b;
                R.get_data(a,b);
                R.display_area();
                break;
            }
            case 3:
            {
                Circle C;
                cout<<"Enter redius : ";
                cin>>a;
                C.get_data(a);
                C.display_area();
            }
            case 4:
            {
                return 0;
            }
            default:
                cout<<"Invalid choice !";
        }
    }
    return 0;
}