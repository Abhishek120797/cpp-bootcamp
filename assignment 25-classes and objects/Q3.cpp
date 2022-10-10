#include<iostream>
using namespace std;

class Factorial
{
    private:
    int fact;
    int num;
    public:
    void set()
    {
        cout<<"Enter a number : ";
        cin>>num;
    }
    int getnum()
    {
        return num;
    }
    int getfact()
    {
        return fact;
    }
    void calculetor_fact()
    {
        int i,temp=1;
        if(num==0)
        {
            fact=1;
            return;
        }
        for(i=1;i<=num;i++)
            temp=temp*i;
        fact=temp;
        }
};


int main()
{
    Factorial f1;
    f1.set();
    f1.calculetor_fact();
    cout<<f1.getnum()<<"! = "<<f1.getfact();
    return 0;
}