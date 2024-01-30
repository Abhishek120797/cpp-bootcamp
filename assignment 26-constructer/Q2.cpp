// Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)

#include <iostream>
using namespace std;

class Time
{
private:
    int h;
    int m;
    int s;

public:
    void setTime(int hr, int min, int sec)
    {
        h = hr;
        m = min;
        s = sec;
    }
    void showData()
    {
        cout << h << " hours " << m << " minutes " << s << " second " << endl;
    }
    void normalize()
    {
        m = m + s / 60;
        s = s % 60;
        h = h + m / 60;
        m = m % 60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m;
        temp.h = h + t.h;
        temp.normalize();
        return temp;
    }
};

int main()
{
    Time t1, t2, t3;

    t1.setTime(5, 50, 30);
    t2.setTime(7, 20, 34);

    t3 = t1.add(t2);

    t1.showData();
    t2.showData();
    t3.showData();

    return 0;
}