// Write a C++ program to calculate the volume of a cuboid

#include <iostream>
using namespace std;

int main()
{
    int l, b, h;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breath: ";
    cin >> b;
    cout << "Enter height: ";
    cin >> h;
    cout << "Volume of cuboid is " << l * b * h;
    return 0;
}