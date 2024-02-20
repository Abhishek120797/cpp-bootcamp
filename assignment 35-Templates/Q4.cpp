// Write a C++ Program to Swap data using function template.

#include <iostream>
using namespace std;

template <typename T>
void swapData(T &num1, T &num2)
{
    T temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int x = 10;
    int y = 20;
    cout << "Before swapping :" << endl;
    cout << "x = " << x << " and "
         << "y = " << y << endl;
    swapData<int>(x, y);
    cout << "After swapping :" << endl;
    cout << "x = " << x << " and "
         << "y = " << y << endl;

    float a = 10.5;
    float b = 20.5;
    cout << "Before swapping :" << endl;
    cout << "a = " << a << " and "
         << "b = " << b << endl;
    swapData<float>(a, b);
    cout << "After swapping :" << endl;
    cout << "a = " << a << " and "
         << "b = " << b << endl;

    char i = 'B';
    char j = 'A';
    cout << "Before swapping :" << endl;
    cout << "i = " << i << " and "
         << "j = " << j << endl;
    swapData<char>(i, j);
    cout << "After swapping :" << endl;
    cout << "i = " << i << " and "
         << "j = " << j << endl;

    return 0;
}
