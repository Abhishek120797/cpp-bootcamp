#include<iostream>
using namespace std;
void fab(int);
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    fab(num);
    return 0;
}

void fab(int x)
{
    int i,t1=-1,t2=1,tn,flag=0;
    for(i=-1;i<=x;i++)
    {
        tn=t1+t2;
        t1=t2;
        t2=tn;
        if(tn==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"number is not febonacci term";
    }
    else
    {
        cout<<"number is febonacci term";
    }
}