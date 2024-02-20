// C++ program to find the integers which come an odd number of times in an array
// using C++ STL.

#include <iostream>
#include <array>
using namespace std;

template <size_t T>
int oddocccurence(const array<int, T> &arr)
{
    int result = 0;
    for (int i = 0; i < T; i++)
    {
        result ^= arr[i];
    }
    return result;
}

int main()
{
    array<int, 9> num = {1, 2, 3, 5, 1, 2, 3, 8, 5};
    int x = oddocccurence<num.size()>(num);
    if (x != 0)
    {
        cout << "integer occurring odd number of times is " << x << endl;
    }
    else
    {
        cout << "no Integer found odd times";
    }
    return 0;
}