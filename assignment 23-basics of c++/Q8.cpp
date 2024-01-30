// Write a C++ program to swap values of two int variables without using third variable

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter number a = ";
    cin >> num1;
    cout << "Enter numbe b = ";
    cin >> num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "a=" << num1 << endl
         << "b=" << num2;
    return 0;
}