// Find the first and last element using the STL array

#include <iostream>
#include <array>
#include <iterator>
#include <tuple>
using namespace std;

int main()
{
    array<int, 10> num;
    cout << "Enter 10 numbers : ";
    for (auto &i : num)
    {
        cin >> i;
    }
    for (auto i : num)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "first element = " << num.front() << endl;
    cout << "last element = " << num.back() << endl;
    return 0;
}