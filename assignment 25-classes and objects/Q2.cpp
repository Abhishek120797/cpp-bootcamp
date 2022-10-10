#include<iostream>
using namespace std;

class Time
{
    private:
    int h;
    int m;
    int s;
    public:
    void set()
    {
        cout<<"Enter hour : ";
        cin>>h;
        if(h<0)
            h=-h;
        cout<<"Enter minutes : ";
        cin>>m;
        if(m<0)
            m=-m;
        cout<<"Enter second : ";
        cin>>s;
        if(s<0)
            s=-s;
    }
    void display()
    {
        cout<<h<<" hr "<<m<<" min "<<s<<" sec"<<endl;
    }
};

int main()
{
    Time t1,t2,t3;
    t1.set();
    t2.set();
    t3.set();
    t1.display();
    t2.display();
    t3.display();
    return 0;
}