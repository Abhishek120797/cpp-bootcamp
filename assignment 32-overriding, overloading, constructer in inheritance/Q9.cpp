#include<iostream>
#include<cmath>
using namespace std;

class Area
{
    private:
        float area;
    public:
        Area(){  };
        Area(float r){ area=3.14*r*r;  };
        Area(float l,float b){ area=l*b; };
        Area(float a,float b,float c)
        {
            if(a+b>c && a+c>b && b+c>a)
            {
                float s=(a+b+c)/2.0;
                area=sqrt(s*(s-a)*(s-b)*(s-c));
            }
            else
                cout<<"trangle not valid"<<endl;
        };
        void display()
        {
            cout<<"Area = "<<area<<endl;
        }
};

int displaymenu()
{
    int choice;
    cout<<"-----------Calculate Area------------\n"<<endl;
    cout<<"1.Circle"<<endl;
    cout<<"2.Rectangel"<<endl;
    cout<<"3.Trangle"<<endl;
    cout<<"4.Quit"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>choice;
    return choice;
}

int main()
{
    while(true)
    {
        switch(displaymenu())
        {
            case 1:
            {
                float redius;
                cout<<"Enter redius : ";
                cin>>redius;
                Area C(redius);
                C.display();
                break;
            }
            case 2:
            {
                float length,breath;
                cout<<"Enter length : ";
                cin>>length;
                cout<<"Enter breath : ";
                cin>>breath;
                Area R(length,breath);
                R.display();
                break;
            }
            case 3:
            {
                float side1,side2,side3;
                cout<<"Enter first side : ";
                cin>>side1;
                cout<<"Enter second side : ";
                cin>>side2;
                cout<<"Enter second side : ";
                cin>>side3;
                Area T(side1,side2,side3);
                T.display();
                break;
            }
            case 4:
                return 0;
            default:
                cout<<"Enter valid choice !"<<endl;
        }
    }
    return 0;
}