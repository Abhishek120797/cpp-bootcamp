// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time

#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    void set_time(int hour, int minute, int second)
    {
        hr = hour;
        min = minute;
        sec = second;
    }

    void display()
    {
        cout << hr << " hr " << min << " min " << sec << " sec " << endl;
    }
};

int main()
{
    Time t1, t2;

    t1.set_time(10, 45, 35);
    t2.set_time(5, 15, 55);

    t1.display();
    t2.display();

    return 0;
}