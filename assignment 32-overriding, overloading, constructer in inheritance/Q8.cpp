#include<iostream>
using namespace std;

class Factorial
{
    private:
        int num;
        unsigned long long fact;
    public:
        Factorial(){ }
        Factorial(int x):num(x){ fact=1;}
        Factorial(const Factorial &temp)
        {
            num=temp.num;
            fact=1;
            calFact();
        }
        void calFact()
        {
            for(int i=1;i<=num;i++)
                fact=fact*i;
        }
        int getnum(){ return num; }
        int getfact(){ return fact; }
};

int main()
{
    Factorial f1(5);
    Factorial f2=f1;

    cout<<"Factorial of "<<f2.getnum()<<" is "<<f2.getfact();
    return 0;
}