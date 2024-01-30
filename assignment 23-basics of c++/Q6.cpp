// Write a C++ program to calculate an average of 3 numbers

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "average is " << (num1 + num2 + num3) / 3;
    return 0;
}