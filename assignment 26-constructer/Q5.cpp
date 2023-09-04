#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 1;
        month = 1;
        year = 2000;
    };
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void displayDate() { cout << day << " / " << month << " / " << year << endl; }
    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }
    int getday() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }
};

int main()
{
    Date d1, d2(12, 7, 1997), d3;
    d3.setDate(22, 10, 1975);

    d1.displayDate();
    d2.displayDate();
    d3.displayDate();
    return 0;
}