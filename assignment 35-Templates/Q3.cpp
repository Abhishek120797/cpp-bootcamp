// Write a C++ program to find the largest of three elements using a template.

#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
float maximum(T1 num1, T2 num2, T3 num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;
    else
    {
        if (num2 > num1 && num2 > num3)
            return num2;
        else
            return num3;
    }
}

int main()
{
    cout << maximum<int, int, int>(10, 20, 30) << endl;
    cout << maximum<float, float, float>(10.5, 20.5, 30.5) << endl;
    cout << maximum<int, float, int>(10, 20.5, 30) << endl;
    cout << maximum<int, int, float>(10, 20, 30.5) << endl;
    return 0;
}