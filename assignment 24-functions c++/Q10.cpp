// Write functions using function overloading to add two numbers having different data
//  types.

#include <iostream>
using namespace std;

float add(float, float);
int add(int, int);

int main()
{
    int a, b;
    float c, d;
    cout << "Enter two float number: ";
    cin >> c >> d;
    cout << "sum is " << add(c, d) << endl;
    cout << "Enter two int number ";
    cin >> a >> b;
    cout << "sum is " << add(a, b) << endl;
    return 0;
}

float add(float num1, float num2)
{
    return num1 + num2;
}

int add(int num1, int num2)
{
    return num1 + num2;
}