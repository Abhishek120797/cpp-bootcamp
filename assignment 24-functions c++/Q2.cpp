#include<iostream>
using namespace std;
void max_digit(int);
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    max_digit(num);
    return 0;
}

void max_digit(int x)
{
    int max=0;
    while(x!=0)
    {
        if(max<x%10)
            max=x%10;
        x=x/10;
    }
    cout<<max<<" is highest digit";
}