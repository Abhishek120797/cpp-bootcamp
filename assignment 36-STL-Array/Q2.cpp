// Using STL Array returns the total number of elements in the array.

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
    cout << "size of array = " << num.size();
    return 0;
}