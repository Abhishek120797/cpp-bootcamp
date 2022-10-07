#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int x,y,z;
    cout<<"Enter three numbers : ";
    cin>>x>>y>>z;
    cout<<"sum of "<<x<<" and "<<y<<" is "<<add(x,y)<<endl;
    cout<<"sum of "<<x<<" "<<y<<" and "<<z<<" is "<<add(x,y,z);
    return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}