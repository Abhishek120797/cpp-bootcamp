// Write a C++ Program to find Sum of Array using function template.

#include <iostream>
using namespace std;

template <typename T>
T sumArray(T a[], int len)
{
    T sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float arr2[] = {1.2, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.7, 9.9, 10.10};

    cout << sumArray<int>(arr1, 10) << endl;
    cout << sumArray<float>(arr2, 10) << endl;

    return 0;
}