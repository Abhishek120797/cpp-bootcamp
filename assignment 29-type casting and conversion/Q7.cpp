#include<iostream>
using namespace std;
class Minute;
class Time
{
    private:
        int hr;
        int min;
        int sec;
    public:
        Time():hr(0),min(0),sec(0){  }
        Time(int h):hr(h){ min=0;sec=0; normalize(); }
        Time(int h,int m):hr(h),min(m){ sec=0; normalize(); }
        Time(int h,int m,int s):hr(h),min(m),sec(s){ normalize(); }

        void setTime(int h,int m=0,int s=0)
        { 
            hr=h;
            min=m;
            sec=s;
            normalize();
        }
        void sethour(int h){ hr=h; }
        void setmin(int m){ min=m; normalize();}
        void setsec(int s){ sec=s; normalize(); }

        int gethour(){ return hr; }
        int getmin(){ return min; }
        int getsec(){ return sec; }

        operator Minute();

        void display()
        {
            cout<<hr<<" : "<<min<<" : "<<sec<<endl;
        }

        void normalize()
        {
            if(sec>59)
            {
                min+=sec/60;
                sec=sec%60;
            }
            if(min>59)
            {
                hr+=min/60;
                min=min%60;
            }
        }
};

class Minute
{
    private:
        int min;
    public:
        Minute():min(0){  }
        Minute(int m){ min=m; }
        void display()
        {
            cout<<"Minutes: "<<min<<endl;
        }

};

Time::operator Minute()
{
    return hr*60+min;
}

int main()
{
    Time t1(2,90,305);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;  
    t1.display();
    m1.display();

    return 0;
}