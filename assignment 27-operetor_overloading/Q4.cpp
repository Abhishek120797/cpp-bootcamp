#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int h)
    {
        hr = h;
        min = 0;
        sec = 0;
    }
    Time(int h, int m)
    {
        hr = h;
        min = m;
        sec = 0;
    }
    Time(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    void setTime(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    void setHour(int h) {}
    void setMinute(int m) {}
    void setSecond(int s) {}

    int getHour() { return hr; }
    int getMinute() { return min; }
    int getSecond() { return sec; }

    bool operator==(Time t)
    {
        int total_sec = hr * 3600 + min * 60 + sec;
        int total_sec_t = t.hr * 3600 + t.min * 60 + t.sec;
        return (total_sec == total_sec_t);
    }

    bool operator>(Time t)
    {
        int total_sec = hr * 3600 + min * 60 + sec;
        int total_sec_t = t.hr * 3600 + t.min * 60 + t.sec;
        return (total_sec > total_sec_t);
    }

    bool operator<(Time t)
    {
        int total_sec = hr * 3600 + min * 60 + sec;
        int total_sec_t = t.hr * 3600 + t.min * 60 + t.sec;
        return (total_sec < total_sec_t);
    }

    friend ostream &operator<<(ostream &, Time);
    friend istream &operator>>(istream &, Time &);
};

ostream &operator<<(ostream &os, Time t)
{
    os << "hours :" << t.hr << endl;
    os << "minute :" << t.min << endl;
    os << "second :" << t.sec << endl;
    return os;
}

istream &operator>>(istream &is, Time &t)
{
    cout << "Enter hour :";
    is >> t.hr;
    cout << "Enter minute:";
    is >> t.min;
    cout << "Enter second:";
    is >> t.sec;
    return is;
}

int main()
{
    Time t1, t2;
    cout << "Enter First Time" << endl
         << "--------------------" << endl;
    cin >> t1;
    cout << "First Time" << endl;
    cout << t1;
    cout << "Enter Second Time" << endl
         << "--------------------" << endl;
    cin >> t2;
    cout << "Second Time" << endl;
    cout << t2;
    if (t1 == t2)
        cout << "Time are same";
    else
        cout << "Time are different";
    return 0;
}