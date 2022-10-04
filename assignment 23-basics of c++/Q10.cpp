#include<iostream>
using namespace std;
int main()
{
    int num[10],i,sum=0;
    cout<<"Enter 10 numbers : ";
    for(i=0;i<10;i++)
    {
        cin>>num[i];
        sum+=num[i];
    }
    cout<<"sum of ten numbers is "<<sum;
    return 0;
}