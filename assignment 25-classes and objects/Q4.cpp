#include<iostream>
using namespace std;

class LargestNumber
{
    private:
    int a,b,c;
    int max;
    public:
    void set()
    {
        cout<<"Enter three numbers : ";
        cin>>a;
        cin>>b;
        cin>>c;
    }
    int get_n1()
    {
        return a;
    }
    int get_n2()
    {
        return b;
    }
    int get_n3()
    {
        return c;
    }
    int getmax()
    {
        return max;
    }
    void largest()
    {
        if(a>=b && a>=c)
            max=a;
        if(b>=a && b>=c)
            max=b;
        if(c>=a && c>=b)
            max=c;
    }
};

int main()
{
    LargestNumber num;
    num.set();
    num.largest();
    cout<<"greter of three number "<<num.get_n1()<<" "
    <<num.get_n2()<<" "<<num.get_n3()<<" is "<<num.getmax();
    return 0;
}