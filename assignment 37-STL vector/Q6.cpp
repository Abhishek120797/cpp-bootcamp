// Write a program to reverse vector elements

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> num = {21, 12, 13, 14, 50, 6, 10, 15};
    vector<int>::reverse_iterator it;
    for (it = num.rbegin(); it != num.rend(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}