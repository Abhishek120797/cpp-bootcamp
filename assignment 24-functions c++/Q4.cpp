#include<iostream>
using namespace std;
int combination();
int factorial(int);
void pascal(int);
int main()
{
    int len;
    cout<<"Enter count of line : ";
    cin>>len;
    pascal(len);
    return 0;
}

int combination(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int factorial(int x)
{
    int fact=1,i;
    for(i=1;i<=x;i++)
        fact=fact*i;
    return fact;
}

void pascal(int line)
{
    int i,j,k,r;
    for(i=1;i<=line;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i && j<=line-1+i && k)
            {
                cout<<combination(i-1,r);
                k=0;
                r++;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
}