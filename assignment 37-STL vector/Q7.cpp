// Write a program to find sum of vector elements

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> num = {21, 12, 13, 14, 50, 6, 10, 15};
    int sum = 0;
    for (int i : num)
    {
        sum = sum + i;
    }
    cout << "sum is " << sum;
    return 0;
}