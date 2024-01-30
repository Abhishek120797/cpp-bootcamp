// Write a C++ program to find the maximum of two numbers

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, max;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    max = num1 >= num2 ? num1 : num2;
    cout << "max number is " << max;
    return 0;
}