#include<iostream>
using namespace std;
void max(int,int);
void max(float,float);
int main()
{
    float a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    max(a,b);
    return 0;
}
void max(int x,int y)
{
    int max;
    max=x>y?x:y;
    cout<<"maximum number is "<<max;
}
void max(float x,float y)
{
    float max;
    max=x>y?x:y;
    cout<<"maximum number is "<<max;
}