#include<iostream>
using namespace std;
void prime_num(int);
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    prime_num(num);
    return 0;
}
void prime_num(int x)
{
    int flag=0,i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==1)
        cout<<x<<" is not prime number";
    else
        cout<<x<<" is prime number";
}