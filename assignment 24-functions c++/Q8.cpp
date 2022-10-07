#include<iostream>
using namespace std;
float area(float);
int area(int,int);
float area(float,float);
int main()
{
    float r,l,b,H,B;
    cout<<"Enter redius of circle : ";
    cin>>r;
    cout<<"area of circle is "<<area(r)<<endl;
    cout<<"Enter lenght of rectangle :";
    cin>>l;
    cout<<"Enter breath of rectangle :";
    cin>>b;
    cout<<"area of rectangle is "<<area(l,b)<<endl;
    cout<<"Enter base of trangle : ";
    cin>>B;
    cout<<"Enter height of trangle : ";
    cin>>H;
    cout<<"Area of tranglr is "<<area(H,B);
    return 0;
}
float area(float x)
{

    return 3.14*x*x;
}
int area(int x,int y)
{

    return x*y;
}
float area(float x,float y)
{

    return 0.5*x*y;
}