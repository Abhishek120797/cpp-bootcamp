#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int x,y;
    cout<<"Enter value of x : ";
    cin>>x;
    cout<<"Enter value of y : ";
    cin>>y;
    swap(x,y);
    cout<<"value of x = "<<x<<endl<<"value of y = "<<y;
    return 0;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}