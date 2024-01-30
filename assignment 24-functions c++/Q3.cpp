// Define a function to calculate x raised to the power y

#include <iostream>
using namespace std;
int calPower(int, int);
int main()
{
    int base, index;
    cout << "Enter a base: ";
    cin >> base;
    cout << "Enter a power: ";
    cin >> index;
    cout << base << " to the power " << index << " is " << calPower(base, index);
    return 0;
}

int calPower(int base, int index)
{
    int power = 1;
    for (int i = 1; i <= index; i++)
    {
        power = power * base;
    }
    return power;
}