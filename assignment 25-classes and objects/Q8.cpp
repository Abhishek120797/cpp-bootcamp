#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breath;
    float area;

public:
    void set_length(float len) { length = len; }
    void set_breath(float bre) { breath = bre; }
    float get_length() { return length; }
    float get_breath() { return breath; }
    float get_area() { return area; }
    void cal_area() { area = length * breath; }
};

int main()
{
    Rectangle r1;
    float l, b;
    cout << "Enter length: ";
    cin >> l;
    r1.set_length(l);
    cout << "Enter breath: ";
    cin >> b;
    r1.set_breath(b);
    r1.cal_area();
    cout << "Area of Rectangle is " << r1.get_area() << " whose length is "
         << r1.get_length() << " and breath is " << r1.get_breath();
    return 0;
}