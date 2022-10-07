#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
int main()
{
    float a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"sum of number is "<<add(a,b);
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
float add(float x,float y)
{
    return x+y;
}