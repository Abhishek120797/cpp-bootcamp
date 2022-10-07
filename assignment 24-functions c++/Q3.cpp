#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    int b,i;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter index :";
    cin>>i;
    cout<<"base to the power index = "<<power(b,i);
    return 0;
}

int power(int base,int index)
{
    int power=1,i;
    for(i=1;i<=index;i++)
        power=power*base;
    return power;
}