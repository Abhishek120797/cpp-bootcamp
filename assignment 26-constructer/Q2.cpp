#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int H,int M,int S)
        {
            h=H;
            m=M;
            s=S;
            normalize();
        }
        void showTime()
        {
            cout<<h<<" : "<<m<<" : "<<s<<endl;
        }
        void normalize()
        {
            if(s>60)
            {
                s=s-60;
                m++;}
            if(m>60)
            {
                m=m-60;
                h++;}
        }
        Time add(Time t)
        {
            Time temp;
            temp.s=s+t.s;
            temp.m=m+t.m;
            temp.h=h+t.h;
            temp.normalize();
            return temp;
        }
};

int main()
{
    Time t1,t2;
    t1.setTime(10,75,75);
    t2.setTime(10,75,75);
    Time t3=t1.add(t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}