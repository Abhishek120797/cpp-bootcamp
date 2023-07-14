#include<iostream>
using namespace std;

class Time
{
    private:
        int hr;
        int min;
        int sec;
    public:
        Time(){ hr=0;min=0;sec=0;}
        Time(int second):sec(second)
        {
            normalize();
        }
        void display()
        {
            cout<<hr<<" : "<<min<<" : "<<sec<<endl;
        }
        void normalize()
        {
            hr=sec/3600;
            sec=sec%3600;
            min=sec/60;
            sec=sec%60;
        }
};


int main()
{
    int duration;
    cout<<"Enter time duration in minutes";
    cin>>duration;
    Time t1 = duration;
    t1.display();

    return 0;
}