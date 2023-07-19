#include<iostream>
using namespace std;

class Number
{
    protected:
        float num1;
        float num2;
        
    public:
        void inputNum()
        {
            cout<<"enter first number: ";
            cin>>num1;
            cout<<endl<<"Enter second number: ";
            cin>>num2;
        }
};

class Sum:public Number
{
    private:
        float sum;
    public:
        void displaySum()
        { 
            sum=num1+num2;
             cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<sum;
        }
};

int main()
{
    Sum s;
    s.inputNum();
    s.displaySum();
    return 0;
}