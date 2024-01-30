//  Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor

#include <iostream>
using namespace std;

class Bank
{
private:
    float principal;
    static float roi;
    int year;
    float si;

public:
    Bank()
    {
        principal = 0;
        year = 0;
        si = 0;
    }
    Bank(float p, int y)
    {
        principal = p;
        year = y;
        cal_simple_interest();
        si = get_SI();
    }

    static void set_roi(float r) { roi = r; }

    void set_bank(float p, int y)
    {
        principal = p;
        year = y;
        cal_simple_interest();
        si = get_SI();
    }
    void set_year(int y) { year = y; }
    void set_principal(float p) { principal = p; }

    float get_roi() { return roi; }
    float get_principal() { return principal; }
    int get_year() { return year; }
    float get_SI()
    {
        cal_simple_interest();
        return si;
    }

    void cal_simple_interest()
    {
        si = (principal * roi * year) / 100;
    }
    void show_SI()
    {
        cal_simple_interest();
        cout << "Principal: $" << principal << endl;
        cout << "Rate of Interest: " << roi << "%" << endl;
        cout << "Years: " << year << endl;
        cout << "Simple Interest: $" << si << endl;
    }
};

float Bank::roi = 5.8;

int main()
{
    Bank b1, b2(10000, 8);
    b1.set_bank(5000, 5);
    b1.show_SI();
    b2.show_SI();
    cout << "simple interest of b1 with 5.8 roi " << b1.get_SI() << endl;
    cout << "simple interest of b2 with 5.8 roi " << b2.get_SI() << endl;
    Bank::set_roi(7.5);
    b1.show_SI();
    b2.show_SI();
    cout << "simple interest of b1 with 7.5 roi " << b1.get_SI() << endl;
    cout << "simple interest of b2 with 7.5 roi " << b2.get_SI() << endl;
    return 0;
}